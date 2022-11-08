#include "stdio.h"
#include "malloc.h"
#include "common.h"

Status InitList(LinkList L)
{
    //构造一个空的单链表
    L = (LinkList)malloc(sizeof (LNode));//生成新节点作为头结点，用头指针L指向头结点
    L->next = NULL;
    return OK;
}

//取值
Status GetElem(LinkList L,int i,ElemType *e)
{
    LNode* p = L->next;//初始化，p指向首元结点，计数器j初值赋为1
    int j = 1;
    while(p && j<i) //顺链域向后扫描，直到p为空域或者p指向第i个元素
    {
        p = p->next;
        ++j;
    }
    if(!p || j>i) return ERROR; //i值不合法 i>n或i<=0
    *e = p->data;
    return OK;
}

//按值查找:成功返回结点的地址值，查找失败则返回NULL
LNode *LocateElem(LinkList L, ElemType e){
    LNode* p = L->next;//初始化，p指向首元节点
    while(p && p->data != e)
        p = p->next;
    return p;
}

//插入
Status ListInsert(LinkList *L,int i,ElemType e)
{
    LNode* p = L;int j = 0;
    while(p && (j < i-1))
    {
        p = p->next;
        ++j;
    }
    if(!p || j>i-1) return ERROR; //i>n+1 或者 i<1
    LNode* s = (LNode*)malloc(sizeof (LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
