#include "stdio.h"
#include "malloc.h"

#define ElemType int
#define Status int
#define OK 1
#define ERROR 0


typedef struct DNode{
    ElemType data;
    struct DNode *prior,*next;
}DNode,*DLinklist;