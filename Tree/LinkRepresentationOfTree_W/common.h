#include "stdio.h"
#include "malloc.h"
#define OK 1
#define ERROR 0
#define MaxSize 100
#define ElemType int
#define Status int
#define bool int



/*struct ElemType{
    int value;
};*/


//二叉树的结点（链式存储）
typedef struct BiTNode{
    ElemType data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

//链式队列结点
typedef struct LinkNode{
    BiTNode * data; //存储指针，而不是结点，节省存储空间
    struct LinkNode *next;
}LinkNode;

typedef struct {
    LinkNode *front,*rear; //队头队尾
}LinkQueue;


//辅助全局变量，用于查找结点p的前驱
BiTNode *p; //p指向目标结点
BiTNode *pre = NULL; //指向当前访问结点的前驱
BiTNode *final = NULL; //用于记录最终结果

