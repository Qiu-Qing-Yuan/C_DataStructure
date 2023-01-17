#include "common.h"

/*链栈的初始化*/
Status InitStack(LinkStack S){
    /*链栈的初始化就是构造一个空栈，因为没必要设置头结点，所以直接将栈顶指针置空即可*/
    S = NULL;
    return OK;
}
/*链栈的入栈*/
Status Push(LinkStack S,SElemType e){
    /*与顺序栈不同：链栈在入栈前不需要判断栈是否满，只需要为入栈元素动态分配一个结点空间*/
    //在栈顶插入元素e
    LinkStack p = (LinkStack) malloc(sizeof (LinkStack ));
    p->data = e;
    p->next = S; //将新节点插入栈顶
    S = p; //修改栈顶指针为p
    return OK;
}
/*链栈的出栈*/
Status Pop(LinkStack S,SElemType *e){
    /*和循序*/
}
/*取链栈的栈顶元素*/
SElemType GetTop(struct StackNode S);