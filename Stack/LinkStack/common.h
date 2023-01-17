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

/*链栈的初始化*/
Status InitStack(LinkStack S);
/*链栈的入栈*/
Status Push(LinkStack S,SElemType e);
/*链栈的出栈*/
Status Pop(LinkStack S,SElemType *e);
/*取链栈的栈顶元素*/
SElemType GetTop(StackNode* S);