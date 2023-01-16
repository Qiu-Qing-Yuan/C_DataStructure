#include "common.h"

/*构造一个空栈*/
Status InitStack(SqStack *S){
    //为顺序栈动态分配一个最大容量为STACK_INIT_SIZE的数组空间
    S->base = (SElemType *) malloc(STACK_INIT_SIZE *sizeof (ElemType));
    //内存空间分配失败
    if(!S->base) exit(OVERFLOW);
    //top初始为base，代表是一个空栈
    S->top = S->base;
    //设置栈的最大容量为MAXSIZE
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
    //返回栈顶元素的值，栈顶指针不变
    *e = *(S.top-1);
    return OK;
}
/*插入元素e为新的栈顶元素*/
Status Push(SqStack *S,SElemType e){
    //插入元素e为新的栈顶元素
    if(S->top - S->base >= S->stackSize){
        //栈满，追加存储空间
        S->base = (SElemType * ) realloc(S->base,(S->stackSize + STACK_INCREMENT) *sizeof (SElemType));
        if(!S->base) exit(OVERFLOW);//内存分配失败
        /*如果原先内存块无法改变大小，realloc就将分配另一块正确大小的内存，并把原先内容复制到新的块上。
         * 因此，在使用realloc之后，就不能再使用指向旧内存的指针，应改用realloc返回的新指针。
         * 如果realloc函数的第一个参数是NULL，那么它的行为就和malloc一模一样 */
        S->top = S->base + S->stackSize;
        S->stackSize += STACK_INCREMENT;
    }
    *S->top++ = e;
    return OK;
}
/*若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK，否则返回ERROR*/
Status Pop(SqStack *S,SElemType *e){
    if(S->top == S->base) return ERROR;
    //栈顶指针减1,将栈顶元素赋给e
    *e = *--S->top;
    return OK;
}
/*从栈底到栈顶依次对栈中每隔元素调用函数visit()。一旦visit()失败，则操作失败*/
Status StackTraverse(SqStack S,Status(*visit()));
