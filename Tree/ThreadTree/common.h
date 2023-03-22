#include "stdio.h"
#include "malloc.h"

#define OK 1
#define ERROR 0
#define Status int
#define ElemType int


typedef struct TheadNode{
    ElemType data;
    struct ThreadNode *lchild,*rchild;
    int ltag,rtag;
}TheadNode,*ThreadTree;