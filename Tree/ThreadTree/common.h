#include "stdio.h"
#include "malloc.h"

#define OK 1
#define ERROR 0
#define Status int
#define ElemType int


typedef struct ThreadNode{
    ElemType data;
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;
}ThreadNode,*ThreadTree;

//全局变量pre，指向当前访问结点的前驱
ThreadNode *pre = NULL;

void InThread(ThreadTree T);
void visit(ThreadNode *q);
void PreThread(ThreadTree T);
void PostThread(ThreadTree T);
void PostThread2(ThreadTree p,ThreadTree pre);