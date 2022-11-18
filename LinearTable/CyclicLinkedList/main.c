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

//插入（在带头结点的单链线性表L中第i个位置之前插入元素）
Status ListInsert(LinkList L,int i,ElemType e)
{
    LNode* p = L;int j = 1;
    while(p && j < i)
    {
        p = p->next;
        ++j;//比指针快1，等于i的时候指针在第i-1个节点
    }
    if(!p || j>i) return ERROR; //i>n+1 或者 i<1
    LNode* s = (LNode*)malloc(sizeof (LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

//删除
Status ListDelete(LinkList L,int i)
{
    LNode* p = L;int j=1;
    while((p->next)  && (j<i)) //查找第i-1个节点
    {
        p = p->next;
        ++j;
    }
    if(!(p->next) || (j>i)) return ERROR;
    LNode* q = p->next;//临时保存被删节点的地址以备释放
    p->next = q->next;//改变删除节点前驱节点的指针域
    free(q);
    return OK;
}

//头插法创建单链表
void CreateList_H(LinkList L,int n)
{
    //逆位序输入n个元素的值，建立带表头结点的单链表
    int i;
    LNode* p ;
    srand(time(0));
    L = (LinkList) malloc(sizeof (LNode));
    L->next = NULL;
    for(i=0; i<n; ++i){
        p = (LinkList) malloc(sizeof (LNode));//生成新节点
        p->data = rand()%100+1;//随机生成100以内的数字
        if(i==0)
        {

        }

//        scanf(&p->data);//输入元素值
        p->next = L->next;//插入到表头
        L->next = p;
    }

}

//尾插法创建单链表
void CreateList_R(LinkList L,int n)
{
    int i;
    LNode* p;
    srand(time(0));
    L = (LinkList) malloc(sizeof (LNode));
    L->next = NULL;
    LinkList r = L;
    for(i=0;i<n;i++)
    {
        p = (LinkList) malloc(sizeof (LNode));
        p->data = rand()%100+1;//随机生成100以内的数字
//        scanf(&p->data);
        p->next = NULL;
        r->next = p;
        r = p;
    }
    r->next = NULL;
}

//将两个有序链表合并为一个有序链表
void MergeList_L(LinkList la,LinkList lb,LinkList lc)
{
    //已知单链线性表的La和Lb的元素按值非递减排列
    //归并La和Lb得到新的单链线性表Lc，Lc的元素也按值非递减排列
    LinkList pa = la->next,pb = lb->next,pc;
    lc = pc = la;
    while(pa && pb)
    {
        if(pa->data <= pb->data){
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }else{
            pc->next = pb;
            pc =pb;
            pb = pb->next;
        }
    }
    pc->next = pa?pa:pb;//插入剩余段
    free(lb);//释放lb的头结点
}


int main() {
    printf("Hello, World!\n");
    return 0;
}
