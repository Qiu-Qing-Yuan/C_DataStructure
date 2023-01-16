#include <time.h>
#include "stdio.h"
#include "malloc.h"
#define ElemType int
#define Status int
#define OK 1
#define ERROR 0
#define OVERFLOW 0

typedef int SElemType; /*SElemType类型根据实际情况确定，这里假设为int*/
typedef struct StackNode
{
    SElemType data;
    struct StackNode *next;
}StackNode,*LinkStack;

