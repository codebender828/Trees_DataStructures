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

#define MAX_NUM_NODES 100

typedef int Status;
typedef int Boolean;
typedef int TElemType;

//二叉树定义
typedef struct BiTNode{
    TElemType data;
    struct BiTNode *lchild;
    struct BITNode *rchild;
}BiTNode, *BiTree;

//三叉树
typedef struct TriTNode{
    TElemType data;
    struct TriTNode *lchild;
    struct TriTNode *rchild;
    struct TriTNode *parent;
}TriTNode, *TriTree;


//双亲链表
typedef struct BTPNode{
    TElemType data;
    int btparent;
    char LRTag;
}BTPNode;

typedef struct BTPTree{
    BTPNode nodes[MAX_NUM_NODES];
    int num_node;
    int root;
};

//哈夫曼树定义  ------------------    注意：静态三叉链表类型定义
typedef struct {
    unsigned int weight;
    unsigned int parent;
    unsigned int lchild;
    unsigned int rchild;
}HTNode, *HuffmanTree;







int main() {

    return 0;
}