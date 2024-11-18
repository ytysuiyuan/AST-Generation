#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "common.h"
#include "parser.h"
#include "msvl_ast.h"
#include "TinyMSVL.parser.h"
// 声明外部函数。
extern int yyparse(void);
struct ast* ast_root;
int main() {
    // 从标准输入读取 MSVL 代码并解析生成 AST。
    if (yyparse() == 0) {
        printf("Parsing successful. AST generated.\n");
        // 初始化 DOT 文件
        initdump();

        dump_node(ast_root);
        // 释放 AST 资源
        if (ast_root) {
            treefree(ast_root);
        }


        // 完成 DOT 文件
        finishdump();
    } else {
        fprintf(stderr, "Parsing failed. No AST generated.\n");
    }
    yylex(); // 调用一次 yylex 处理结束符

    return 0;
}
