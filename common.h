#ifndef COMMON_H
#define COMMON_H

#include "msvl_ast.h"

void yyerror(const char *msg);

char *ntype2str(enum node_type_t ntype);

void treefree(struct ast* n);

void freesymbol(struct symbol *p);

void freeast(struct ast *p);

void freenumval(struct numval *p);

void freesym(struct sym *p);

void freeflow(struct flow *p);

void freesymasgn(struct symasgn *p);

void freeempty(struct empty *p);

void freeunode(struct unode *p);

void dump_node(struct ast *n);
extern char *dumpfname;
extern FILE* dumpfile;
extern int uidgen;

void initdump(void);

void finishdump(void);

int getnid(struct ast *n);

int get_new_nid(void);
#endif  // COMMON_H
