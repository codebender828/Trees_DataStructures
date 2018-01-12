#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

/*函数结果状态代码*/
#define TRUE 1
#define Nil 0
#define INT
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1

typedef int Status;
typedef int Boolean;
typedef int TElemType;


typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild;
    struct BITNode *rchild;
}BiTNode, *BiTree;

typedef struct TriTNode{
    TElemType data;
    struct TriTNode *lchild;
    struct TriTNode *rchild;
    struct TriTNode *parent;
}TriTNode, *TriTree;






int main() {

    return 0;
}