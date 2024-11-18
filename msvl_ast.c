#include <stdio.h>
#include <stdlib.h>
#include "msvl_ast.h"
#include "parser.h"
#include "common.h"

//// 实现 AST 节点的构造函数

struct ast *newast(enum node_type_t ntype, struct ast *l, struct ast *r) {

    struct ast *node = (struct ast*)malloc(sizeof(struct ast));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = ntype;
    node->l = l;
    node->r = r;
    node->rr=NULL;
    node->nid = get_new_nid();
    // 打印调试信息
    //printf("Created newast node: nid=%d, ntype=%d, l->nid=%d, r->nid=%d\n", node->nid, ntype, l->nid, r->nid);
    return node;
}

struct ast *newsym(enum node_type_t ntype, struct symbol *s) {
    struct sym *node = (struct sym*)malloc(sizeof(struct sym));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = ntype;
    node->s = s;
    node->nid = get_new_nid();
    symbol[node->nid]=s->name;
    // 打印调试信息
    printf("Created newsym node: nid=%d, ntype=%d, s->name=%s, s->value=%d\n", node->nid, ntype, s->name, s->value);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = ntype;
    result->l = NULL;  // 左子树为空
    result->r = NULL;  // 右子树为空
    result->rr=NULL;
    result->nid = node->nid;  // 使用 struct sym 的 nid
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}

struct ast *newnum(int number) {
    struct numval *node = (struct numval*)malloc(sizeof(struct numval));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = NUMVAL;
    node->number = number;
    node->nid = get_new_nid();
    num[node->nid]=number;
    // 打印调试信息
    printf("Created newnum node: nid=%d, number=%d\n", node->nid, number);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = NUMVAL;
    result->l = NULL;  // 左子树为空
    result->r = NULL;  // 右子树为空
    result->rr=NULL;
    result->nid = node->nid;
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}

struct ast *newflow(struct ast *cond, struct ast *th, struct ast *el) {
    struct flow *node = (struct flow*)malloc(sizeof(struct flow));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = CONDFLOW;
    node->cond = cond;
    node->th = th;
    node->el = el;
    node->nid = get_new_nid();
    // 打印调试信息
    printf("Created newflow node: nid=%d, cond->nid=%d, th->nid=%d, el->nid=%d\n", node->nid, cond->nid, th->nid, el->nid);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = CONDFLOW;
    result->l = cond;
    result->r = th;
    result->rr=el;
    result->nid = node->nid;
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}

struct ast *newasgn(struct sym *s, struct ast *v) {
    struct symasgn *node = (struct symasgn*)malloc(sizeof(struct symasgn));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = SYMASIGN;
    node->s = s;
    node->v = v;
    node->nid = get_new_nid();
    //symbol[node->nid]=s->s->name;
    // 打印调试信息
    printf("Created newasgn node: nid=%d, s->nid=%d, v->nid=%d\n", node->nid, s->nid, v->nid);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = SYMASIGN;
    result->nid = get_new_nid();
    result->l=(struct ast*)s;
    result->r=v;
    result->rr=NULL;
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}

struct ast *newempty(enum node_type_t ntype) {
    struct empty *node = (struct empty*)malloc(sizeof(struct empty));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = ntype;
    node->nid = get_new_nid();
    // 打印调试信息
    printf("Created newempty node: nid=%d, ntype=%d\n", node->nid, ntype);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = ntype;
    result->l = NULL;  // 左子树为空
    result->r = NULL;  // 右子树为空
    result->rr=NULL;
    result->nid = node->nid;
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}

struct ast *newunode(enum node_type_t ntype, struct ast *n) {
    struct unode *node = (struct unode*)malloc(sizeof(struct unode));
    if (!node) {
        yyerror("out of memory!");
    }
    node->ntype = ntype;
    node->n = n;
    node->nid = get_new_nid();
    // 打印调试信息
    printf("Created newunode node: nid=%d, ntype=%d, n->nid=%d\n", node->nid, ntype, n->nid);
    // 分配 struct ast
    struct ast *result = (struct ast*)malloc(sizeof(struct ast));
    if (!result) {
        yyerror("out of memory!");
    }
    // 初始化新节点
    result->ntype = ntype;
    result->l = NULL;  // 左子树为空
    result->r = n;
    result->rr=NULL;
    result->nid = node->nid;
    printf("result->nid=%d\n",result->nid);
    return result;
    //return (struct ast*)node;
}
