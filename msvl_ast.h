#ifndef __MSVL_AST_H__
#define __MSVL_AST_H__
#include "common.h"

// 枚举所有节点类型
enum node_type_t
{
    PROGROOT, // 语法根
    STMT, // 语句
    SYMDEF, // 符号定义
    SYMUSE, // 符号使用
    NUMVAL, // 数字（仅限整数）
    CONDFLOW, // if-then-else
    ELSEEXP, // 可选的 else
    SYMASIGN, // 符号赋值
    ANDSTA, // xxx and xxx
    ORSTA, // xxx or xxx
    CHOPSTA, // xxx ; xxx
    SKIPSTA, // skip
    USUBEXP, // -a
    NEGEXP, // !xxx
    BOREXP, // BOOL_OR
    BANDEXP, // BOOL_AND
    EQEXP, // =
    NEEXP, // !=
    GTEXP, // >
    GEEXP, // >=
    LTEXP, // <
    LEEXP, // <=
    ADDEXP, // +
    SUBEXP, // -
    MULEXP, // *
    DIVEXP, // /
};

// 定义符号
struct symbol
{
    char *name; // 变量名
    int value; // 符号的值
};

// 定义所有节点类型
//由于if-then-else语句不是二叉树类型，但是又必须转换为ast*类型，所以我在这里加入了rr，专门供这个语句使用,在其它节点rr都置为null
struct ast
{
    enum node_type_t ntype; // 节点类型
    struct ast *l;         // 左子树
    struct ast *r;         // 右子树
    struct ast *rr;   //else分支独有
    int nid; // 节点 ID
};

// 整数值节点
struct numval
{
    enum node_type_t ntype; // NUMVAL
    int number;
    int nid; // 节点 ID
};

// 符号节点
struct sym
{
    enum node_type_t ntype; // SYMDEF 或 SYMUSE
    struct symbol *s;
    int nid; // 节点 ID
};

// if-then-else 流程
struct flow
{
    enum node_type_t ntype; // CONDFLOW
    struct ast *cond;      // if
    struct ast *th;        // then
    struct ast *el;        // else
    int nid; // 节点 ID
};

// 赋值
struct symasgn
{
    enum node_type_t ntype; // SYMASIGN
    struct sym *s;          // 符号
    struct ast *v;          // 值（可能是语句）
    int nid; // 节点 ID
};

// 空节点
struct empty
{
    enum node_type_t ntype;
    int nid; // 节点 ID
};

// 逻辑操作
struct unode
{
    enum node_type_t ntype;
    struct ast *n;
    int nid; // 节点 ID
};

// 构造 AST 节点的函数声明
struct ast *newast(enum node_type_t ntype, struct ast *l, struct ast *r);
struct ast *newsym(enum node_type_t ntype, struct symbol *s);
struct ast *newnum(int number);
struct ast *newflow(struct ast *cond, struct ast *th, struct ast *el);
struct ast *newasgn(struct sym *s, struct ast *v);
struct ast *newempty(enum node_type_t ntype);
struct ast *newunode(enum node_type_t ntype, struct ast *n);
// 在 msvl_ast.h 中声明全局数组
extern char* symbol[1000];
extern int num[1000];
#endif

/*
//作为一个思路，没有真的使用
// 定义一个动态数组结构体
typedef struct {
    int* data;       // 存储数组元素的指针
    size_t size;     // 当前数组元素个数
    size_t capacity; // 数组容量，即分配的内存空间
} Vector;

// 初始化一个空的动态数组
void initVector(Vector* vec) {
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}

// 在数组尾部添加元素
void pushBack(Vector* vec, int value) {
    if (vec->size == vec->capacity) {
        // 如果数组已满，扩展容量
        vec->capacity = (vec->capacity == 0) ? 1 : vec->capacity * 2;
        vec->data = realloc(vec->data, vec->capacity * sizeof(int));
    }
    // 添加元素到尾部
    vec->data[vec->size++] = value;
}

// 释放动态数组的内存
void freeVector(Vector* vec) {
    free(vec->data);
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}*/
