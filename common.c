#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "common.h"
#include "msvl_ast.h"
// 文件名和句柄
char *dumpfname = "dump.dot";
FILE* dumpfile = NULL;
char* symbol[1000];
int num[1000];
// 唯一节点 ID 生成器
int uidgen = 0;

void initdump(void) {

    if (dumpfile) {
        return;
    }

    // 打开文件
    if (!(dumpfile = fopen(dumpfname, "w"))) {
        fprintf(stderr, "cannot open the file: %s\n", dumpfname);
        return;
    }

    // 写入开始部分
    fprintf(dumpfile, "digraph ARG {\n");

}

void finishdump(void) {
    // 写入结束部分
    fprintf(dumpfile, "}");
    // 刷新缓冲区到磁盘
    fflush(dumpfile);

    if (dumpfile) {
        fclose(dumpfile);
        dumpfile = NULL;  // 将文件句柄设置为 NULL，以免重复关闭

    }
}

int getnid(struct ast *n) {
    switch (n->ntype) {
        case NUMVAL: return ((struct numval*)n)->nid;
        case SYMUSE:
        case SYMDEF: return ((struct sym*)n)->nid;
        case SKIPSTA: return ((struct empty*)n)->nid;
        case NEGEXP:
        case USUBEXP:
        case ELSEEXP: return ((struct unode*)n)->nid;
        case CONDFLOW: return ((struct flow*)n)->nid;
        default: return n->nid;
    }
}

int get_new_nid(void) {
    int new_nid = uidgen++;
    printf("Generated new nid: %d\n", new_nid);
    return new_nid;
}

void yyerror(const char *msg) {
    fprintf(stderr, "%s\n", msg);
}

char *ntype2str(enum node_type_t ntype) {
    switch (ntype) {
        case PROGROOT: return "PROGROOT";
        case SYMDEF: return "SYMDEF";
        case SYMUSE: return "SYMUSE";
        case NUMVAL: return "NUMVAL";
        case CONDFLOW: return "CONDFLOW";
        case ELSEEXP: return "else";
        case SYMASIGN: return "<==";
        case ANDSTA: return "and";
        case ORSTA: return "or";
        case CHOPSTA: return ";";
        case SKIPSTA: return "skip";
        case USUBEXP: return "-";
        case NEGEXP: return "!";
        case BOREXP: return "OR";
        case BANDEXP: return "AND";
        case EQEXP: return "=";
        case NEEXP: return "!=";
        case GTEXP: return ">";
        case GEEXP: return ">=";
        case LTEXP: return "<";
        case LEEXP: return "<=";
        case ADDEXP: return "+";
        case SUBEXP: return "-";
        case MULEXP: return "*";
        case DIVEXP: return "/";
        default: return "unknown";
    }
}



void freesymbol(struct symbol *p) {
    if (p) {
        if (p->name) {
            free(p->name);
        }
        free(p);
    }
}

void freeast(struct ast *p) {
    if (p) {
        if (p->l)
            treefree(p->l);
        if (p->r)
            treefree(p->r);
        free(p);
    }
}

void freenumval(struct numval *p) {
    if (p) {
        free(p);
    }
}

void freesym(struct sym *p) {
    if (p) {
        if (p->s)
            freesymbol(p->s);
        free(p);
    }
}

void freeflow(struct flow *p) {
    if (p) {
        if (p->cond)
            treefree(p->cond);
        if (p->th)
            treefree(p->th);
        if (p->el)
            treefree(p->el);
        free(p);
    }
}

void freesymasgn(struct symasgn *p) {
    if (p) {
        if (p->s)
            freesym(p->s);
        if (p->v)
            treefree(p->v);
        free(p);
    }
}

void freeempty(struct empty *p) {
    if (p) {
        free(p);
    }
}

void freeunode(struct unode *p) {
    if (p) {
        if (p->n) {
            treefree(p->n);
        }
        free(p);
    }
}

// 生成 DOT 格式的节点信息
void dump_node(struct ast *n) {
    if (n) {
        char *ntype_str = ntype2str(n->ntype);
        printf("current point %d\n", n->nid);

        //fprintf(dumpfile, "%d [label=\"%s\" id=\"%d\"]\n", n->nid, ntype_str, n->nid);
        char *str1="SYMDEF";
        char *str2="SYMUSE";
        char *str3="NUMVAL";
        // 输出节点的具体值到文件，但是真正在运行的时候会出现指针指向错误，大概率是强制类型转换的问题
        // 为了解决这个问题，我使用全局数组，用nid作为下标访问对应的符号或数字，只得出此下策
        /*if (strcmp(ntype_str,str1)==0 || strcmp(ntype_str,str2)==0) {
            fprintf(dumpfile, "%d [label=\"%s\\n%s\" id=\"%d\"]\n", n->nid, ntype_str, ((struct sym *)n)->s->name, n->nid);
        } else if (strcmp(ntype_str,str3)==0) {
            fprintf(dumpfile, "%d [label=\"%s\\n%d\" id=\"%d\"]\n", n->nid, ntype_str, ((struct numval *)n)->number, n->nid);
        } else {
            fprintf(dumpfile, "%d [label=\"%s\" id=\"%d\"]\n", n->nid, ntype_str, n->nid);
        }*/
        if (strcmp(ntype_str,str1)==0 || strcmp(ntype_str,str2)==0) {
            fprintf(dumpfile, "%d [label=\"%s\\n%s\" id=\"%d\"]\n", n->nid, ntype_str, symbol[n->nid], n->nid);
        } else if (strcmp(ntype_str,str3)==0) {
            fprintf(dumpfile, "%d [label=\"%s\\n%d\" id=\"%d\"]\n", n->nid, ntype_str, num[n->nid], n->nid);
        } else {
            fprintf(dumpfile, "%d [label=\"%s\" id=\"%d\"]\n", n->nid, ntype_str, n->nid);
        }
        // 输出左右子树信息
        if (n->l) {
            printf("left child: %d\n", n->l->nid);
            fprintf(dumpfile, "%d -> %d [label=\"l\"]\n", n->nid, n->l->nid);
            dump_node(n->l);
        }

        if (n->r) {
            printf("right child: %d\n", n->r->nid);
            fprintf(dumpfile, "%d -> %d [label=\"r\"]\n", n->nid, n->r->nid);
            dump_node(n->r);
        }

        //如果存在n->rr的话，说明有else分支
        if(n->rr){
            fprintf(dumpfile, "%d -> %d [label=\"rr\"]\n", n->nid, n->rr->nid);
            dump_node(n->rr);
        }
    }
}

// 释放节点
void treefree(struct ast* n) {
    if (!n) {
        return;
    }

    printf("Freeing node type: %s\n", ntype2str(n->ntype));

    switch (n->ntype) {
        case NUMVAL: {
            freenumval((struct numval*)n);
            break;
        }
        case SYMUSE:
        case SYMDEF: {
            freesym((struct sym*)n);
            break;
        }
        case SKIPSTA: {
            freeempty((struct empty*)n);
            break;
        }
        case NEGEXP:
        case USUBEXP:
        case ELSEEXP: {
            freeunode((struct unode*)n);
            break;
        }
        case CONDFLOW: {
            freeflow((struct flow*)n);
            break;
        }
        case SYMASIGN: {
            freesymasgn((struct symasgn*)n);
            break;
        }
        default: {
            freeast((struct ast*)n);
        }
    };
}



