#include "common.h"

/*构造一个空栈*/
Status InitStack(SqStack *S){
    //构造一个空栈S
    S->base = (SElemType *) malloc(STACK_INIT_SIZE *sizeof (ElemType));
    if(!S->base) exit(OVERFLOW);
    S->top = S->base;
    S->stackSize = STACK_INIT_SIZE;
    return OK;
}
/*销毁栈S，S不再存在*/
Status DestroyStack(SqStack *S);
/*把S置为空栈*/
Status ClearStack(SqStack *S);
/*判断S是否为空栈*/
Status StackEmpty(SqStack S);
/*返回S的元素个数，即栈的长度*/
int StackLength(SqStack S);
/*若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR*/
Status GetTop(SqStack S,SElemType *e){
    //若栈不空，则用e返回S的栈顶元素，并返回OK，否则返回ERROR
    if(S.top == S.base) return ERROR;
    *e = *(S.top-1);
    return OK;
}
/*插入元素e为新的栈顶元素*/
Status Push(SqStack *S,SElemType e){
    //
}
/*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR*/
Status Pop(SqStack *S,SElemType *e);
/*从栈底到栈顶依次对栈中每隔元素调用函数visit()。一旦visit()失败，则操作失败*/
Status StackTraverse(SqStack S,Status(*visit()));
