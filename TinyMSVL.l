%option noyywrap yylineno

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "msvl_ast.h"
#include "common.h"
#include "parser.h"
#include "TinyMSVL.parser.h"
#pragma warning(disable: 4996) // 避免编译错误
extern void yyerror(const char *msg);
%}

%x comment

LETTER [a-zA-Z_]
DIGIT {DIGITNUMBER}+
DIGITNUMBER [0-9]
IDENTIFIER {LETTER}({LETTER}|[$]|{DIGITNUMBER})*
WSPACE [ \t]+

%%

"int"     { printf("Token: INT\n"); return INT; }
"and" { printf("Token: AND\n"); return AND; }
"AND" { printf("Token: BOOLAND\n"); return BOOLAND; }
"OR" { printf("Token: BOOLOR\n"); return BOOLOR; }
"skip" { printf("Token: SKIP\n"); return SKIP; }
"if" { printf("Token: IF\n"); return IF; }
"then" { printf("Token: THEN\n"); return THEN; }
"else" { printf("Token: ELSE\n"); return ELSE; }
";" { printf("Token: CHOP\n"); return CHOP; }
"=" { printf("Token: EQ\n"); return EQ; }
"<==" { printf("Token: ASSP\n"); return ASSP; }
":=" { printf("Token: ASSN\n"); return ASSN; }
"<" { printf("Token: LT\n"); return LT; }
">" { printf("Token: GT\n"); return GT; }
"<=" { printf("Token: LE\n"); return LE; }
">=" { printf("Token: GE\n"); return GE; }
"!=" { printf("Token: NE\n"); return NE; }
"!" { printf("Token: NEGATION\n"); return NEGATION; }
"+" { printf("Token: ADD\n"); return ADD; }
"-" { printf("Token: SUB\n"); return SUB; }
"*" { printf("Token: MUL\n"); return MUL; }
"/" { printf("Token: DIV\n"); return DIV; }
"(" { printf("Token: OPENPAR\n"); return OPENPAR; }
")" { printf("Token: CLOSEPAR\n"); return CLOSEPAR; }
"{" { printf("Token: OPENBPAR\n"); return OPENBPAR; }
"}" { printf("Token: CLOSEBPAR\n"); return CLOSEBPAR; }
\n      { printf("Token: END\n"); return END; }

{IDENTIFIER} {
    yylval.s = (struct symbol*)malloc(sizeof(struct symbol));
    yylval.s->name = strdup(yytext);  
    yylval.s->value = 0;
    printf("Token: ID, Value: %s\n", yytext);
    return ID;
}

{DIGIT} {
    yylval.val = atoi(yytext);
    printf("Token: INTLITERAL, Value: %d\n", yylval.val);
    return INTLITERAL;
}

"/*" {
    printf("Comment Start\n");
    BEGIN comment;
}

<comment>[^*\n]+ {}

<comment>"*" { }

<comment>"*/" {
    printf("Comment End\n");
    BEGIN 0;
}

<comment>\n {
    yyerror("Unterminated comment");
    BEGIN 0;
}
