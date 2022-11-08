#include "main.h"
#include "stdio.h"
#include "malloc.h"

/*1、顺序表初始化*/
Status InitList_Sq(SqList *L){
    L->elem = (ElemType*)malloc(sizeof (ElemType)*INITSIZE);
    if(!L->elem) exit(OVERFLOW);//存储分配失败
    L->length=0;
    L->listSize = INITSIZE;//初始存储容量
    return OK;
}

/*7、插入元素（在线性表L的第i个位置之前插入新的元素e）*/
Status ListInsert(SqList *L,int i,ElemType e){
    int j;
    if((i<1)||(i>L->length+1)) return ERROR;
    if(L->length>=L->listSize) {
        ElemType* newBase = (ElemType * ) realloc(L->elem,
                                        (L->listSize+LISTINCREMENT) * sizeof (ElemType));
        if(!newBase) exit(OVERFLOW);
        L->elem = newBase;//新基地址
        L->listSize += LISTINCREMENT;
    }
    for(j=L->length-1;j>i-1;j--)
        L->elem[j+1]=L->elem[j];
    L->elem[i-1] = e;
    ++L->length;
    return OK;
}

/*2、销毁顺序表*/
void DestroyList(SqList *L){
    if(L->elem) free(L);
}

/*3、清空线性表*/
void ClearList(SqList *L){
    L->length=0;
}

/*4、求线性表的长度*/
int GetLength(SqList L){
    return L.length;
}

/*5、判断线性表是否为空*/
int IsEmpty(SqList L){
    if(L.length==0) return 1;
    else return 0;
}

/*6、顺序表查找*/
int LocateElem(SqList L,ElemType e){
    //返回是第几个元素
    int i=0;
    while (i<L.length&&L.elem[i]!=e) i++;
    if(i<L.length) return i+1;//查找成功，返回序号
    return ERROR; //查找失败，返回0
}



/*8.顺序表删除操作*/
Status ListDelete(SqList *L,int i,int *e){
    int j;
    if(i<1||i>L->length) return ERROR;
    *e = L->elem[i-1];
    for(j=i;j<=L->length-1;j++)
        L->elem[j-1] = L->elem[j];
    --L->length;
    return OK;
}

Status GetElem(SqList *L,int i,int* e){
    if(i<1||i>L->length) return ERROR;
    *e = L->elem[i-1];
    return OK;
}

/*遍历线性表的所有元素*/
Status ListAll(SqList L){
    int i=0;
    if(L.length==0) return ERROR;
    printf("[");
    for (i = 0; i < L.length; ++i) {
        if(i!=L.length-1)
        printf("%d,",L.elem[i]);
        else printf("%d",L.elem[i]);
    }
    printf("]\n");
    return OK;
}



int main(){
    SqList L;
    int i;
    InitList_Sq(&L);
    for (i = 0; i < 5; ++i) {
        L.elem[i]=i;
        L.length++;
    }
//    DestroyList(&L);

    if(ListAll(L)==1)
        printf("遍历列表成功");
    else
        printf("列表中无元素");
//    printf("%d",L.elem[3]);
//    ListInsert(&L,i,ElemType e)
    return 0;
}

