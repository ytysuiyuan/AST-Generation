%{
#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "msvl_ast.h"
#include "common.h"

extern int yylex(void);
extern int yyparse(void);
struct ast *ast_root = NULL;
%}

%union {
    struct ast *node;
    int val;
    struct symbol *s;
    int nid;
}

%token IF ELSE SKIP THEN 
%token INT
%token OPENPAR CLOSEPAR OPENBPAR CLOSEBPAR
%token RETURN
%token END


%left COMMA 
%left CHOP
%left OR
%left AND 
%right ASSP ASSN 
%left BOOLOR
%left BOOLAND
%left NE EQ 
%left GE LE GT LT 
%left ADD SUB 
%left MUL DIV

%nonassoc NEGATION

%token<s> ID
%token<val> INTLITERAL
%type<node> asgnstmt
%type<node> statement
%type<node> ifstmt optelsestmt
%type<node> unaryExp primaryExp constExp
%type<node> exp
%type<node> declaration
%type<node> program

%%

program
    : statement END {
        ast_root = newast(PROGROOT, $1, NULL);
        // 使用 YYACCEPT 表示解析成功完成
        YYACCEPT;
    }
    ;



statement
    : statement AND statement { $$ = newast(ANDSTA, $1, $3); printf("AND statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", $$->nid, $1->nid, $3->nid); } 
    | statement OR statement { $$ = newast(ORSTA, $1, $3); printf("OR statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", $$->nid, $1->nid, $3->nid); } 
    | statement CHOP statement { $$ = newast(CHOPSTA, $1, $3); printf("CHOP statement: $$->nid=%d, $1->nid=%d, $3->nid=%d\n", $$->nid, $1->nid, $3->nid); } 
    | exp { $$ = $1; }
    | declaration { $$ = $1;}
    | asgnstmt { $$ = $1; }
    | SKIP { $$ = newempty(SKIPSTA); printf("SKIP statement\n");}
    | ifstmt { $$ = $1; }
    | OPENPAR statement CLOSEPAR { $$ = $2; }
    | END { $$ = NULL; } /* Allow an empty statement */
    ;


declaration
    : INT ID{
        $$ = newsym(SYMDEF, $2);
        printf("Declaration: INT %s\n", $2->name);
	
    }
    ;

asgnstmt
    : ID ASSP exp{
        struct ast* id = newsym(SYMUSE, $1);
        $$ = newasgn((struct sym*)id, $3);
        printf("Assignment: %s := ...\n", $1->name);
    }
    | ID ASSN exp{
        struct ast* id = newsym(SYMUSE, $1);
        $$ = newasgn((struct sym*)id, $3);
        printf("Assignment: %s := ...\n", $1->name);
    }
    ;

ifstmt
    : IF exp THEN OPENBPAR statement CLOSEBPAR optelsestmt
        { $$ = newflow($2, $5, $7); printf("If statement\n"); }
    ;

optelsestmt
    : ELSE OPENBPAR statement CLOSEBPAR
        { $$ = newunode(ELSEEXP, $3); printf("Else statement\n"); }
    | { $$ = NULL; }
    ;

exp
    : unaryExp{ $$ = $1; }
    | exp BOOLOR exp { $$ = newast(BOREXP, $1, $3); printf("Binary OR Expression\n"); }
    | exp BOOLAND exp{ $$ = newast(BANDEXP, $1, $3); printf("Binary AND Expression\n"); }
    | exp EQ exp { $$ = newast(EQEXP, $1, $3); printf("Binary EQ Expression\n"); }
    | exp NE exp { $$ = newast(NEEXP, $1, $3); printf("Binary NE Expression\n"); }
    | exp GT exp{ $$ = newast(GTEXP, $1, $3); printf("Binary GT Expression\n"); }
    | exp GE exp{ $$ = newast(GEEXP, $1, $3); printf("Binary GE Expression\n"); }
    | exp LT exp{ $$ = newast(LTEXP, $1, $3); printf("Binary LT Expression\n"); }
    | exp LE exp{ $$ = newast(LEEXP, $1, $3); printf("Binary LE Expression\n"); }
    | exp ADD exp{ $$ = newast(ADDEXP, $1, $3); printf("Binary ADD Expression\n"); }
    | exp SUB exp{ $$ = newast(SUBEXP, $1, $3); printf("Binary SUB Expression\n"); }
    | exp MUL exp{ $$ = newast(MULEXP, $1, $3); printf("Binary MUL Expression\n"); }
    | exp DIV exp{ $$ = newast(DIVEXP, $1, $3); printf("Binary DIV Expression\n"); }
    ;

unaryExp
    : primaryExp{ $$ = $1; }
    | SUB unaryExp{ $$ = newunode(USUBEXP, $2); printf("Unary SUB Expression\n"); }
    | NEGATION unaryExp{ $$ = newunode(NEGEXP, $2); printf("Unary NEGATION Expression\n"); }
    ;

primaryExp
    : constExp{ $$ = $1; }
    | ID{ $$ = newsym(SYMUSE, $1); printf("Identifier: %s\n", $1->name);printf("$$->nid=%d\n",$$->nid); }
    | OPENPAR exp CLOSEPAR{ $$ = $2; }
    ;

constExp
    : INTLITERAL{ $$ = newnum($1); printf("Integer Literal: %d\n", $1); }
    ;
%%


