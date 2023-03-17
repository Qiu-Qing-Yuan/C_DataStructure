#include "stdio.h"
#include "malloc.h"

#define ElemType int
#define Status int
#define OK 1
#define ERROR 0

typedef struct DNode{ //定义双链表结点类型
    ElemType data;
    struct DNode *prior,*next; //前驱和后继指针
}DNode,*DLinklist;