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
    /*删除S的栈顶元素，用e返回其值*/
    LinkStack p;
    if(S==NULL) return ERROR;//栈空
    *e = S->data;//将栈顶元素赋给e
    p = S;//用p临时保存栈顶元素空间，以备释放
    S = S->next;//修改栈顶指针，指向新的栈顶元素
    free(p);
    return OK;
}
/*取链栈的栈顶元素*/
SElemType GetTop(StackNode* S){
    /*与顺序栈一样，当栈非空时，返回当前栈顶元素的值，栈顶指针S保持不变*/
    //返回S的栈顶元素，不修改栈顶指针
    if(S!=NULL)//栈非空
        return S->data;
}