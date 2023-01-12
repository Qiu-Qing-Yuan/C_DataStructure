#include <time.h>
#include "stdio.h"
#include "malloc.h"
#define ElemType int
#define Status int
#define OK 1
#define ERROR 0
#define OVERFLOW 0
#define STACK_INIT_SIZE 100 //存储空间初始分配量
#define STACK_INCREMENT 10 //存储空间分配增量

typedef int SElemType; /*SElemType类型根据实际情况确定，这里假设为int*/
typedef struct
{
    SElemType* base; //在栈构造之前和销毁之后，base值为NULL
    SElemType* top; //栈顶指针
    int stackSize; //当前已经分配的存储空间，以元素为单位
}SqStack; //LinkList为指向结构体LNode的指针类型

/*构造一个空栈*/
Status InitStack(SqStack *S);
/*销毁栈S，S不再存在*/
Status DestroyStack(SqStack *S);
/*把S置为空栈*/
Status ClearStack(SqStack *S);
/*判断S是否为空栈*/
Status StackEmpty(SqStack S);
/*返回S的元素个数，即栈的长度*/
int StackLength(SqStack S);
/*若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR*/
Status GetTop(SqStack S,SElemType *e);
/*插入元素e为新的栈顶元素*/
Status Push(SqStack *S,SElemType e);
/*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR*/
Status Pop(SqStack *S,SElemType *e);
/*从栈底到栈顶依次对栈中每隔元素调用函数visit()。一旦visit()失败，则操作失败*/
Status StackTraverse(SqStack S,Status(*visit()));