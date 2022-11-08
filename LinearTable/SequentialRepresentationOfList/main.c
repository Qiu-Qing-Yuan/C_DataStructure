#include "main.h"
#include "stdio.h"
#include "malloc.h"

/*1��˳����ʼ��*/
Status InitList_Sq(SqList *L){
    L->elem = (ElemType*)malloc(sizeof (ElemType)*INITSIZE);
    if(!L->elem) exit(OVERFLOW);//�洢����ʧ��
    L->length=0;
    L->listSize = INITSIZE;//��ʼ�洢����
    return OK;
}

/*7������Ԫ�أ������Ա�L�ĵ�i��λ��֮ǰ�����µ�Ԫ��e��*/
Status ListInsert(SqList *L,int i,ElemType e){
    int j;
    if((i<1)||(i>L->length+1)) return ERROR;
    if(L->length>=L->listSize) {
        ElemType* newBase = (ElemType * ) realloc(L->elem,
                                        (L->listSize+LISTINCREMENT) * sizeof (ElemType));
        if(!newBase) exit(OVERFLOW);
        L->elem = newBase;//�»���ַ
        L->listSize += LISTINCREMENT;
    }
    for(j=L->length-1;j>i-1;j--)
        L->elem[j+1]=L->elem[j];
    L->elem[i-1] = e;
    ++L->length;
    return OK;
}

/*2������˳���*/
void DestroyList(SqList *L){
    if(L->elem) free(L);
}

/*3��������Ա�*/
void ClearList(SqList *L){
    L->length=0;
}

/*4�������Ա�ĳ���*/
int GetLength(SqList L){
    return L.length;
}

/*5���ж����Ա��Ƿ�Ϊ��*/
int IsEmpty(SqList L){
    if(L.length==0) return 1;
    else return 0;
}

/*6��˳������*/
int LocateElem(SqList L,ElemType e){
    //�����ǵڼ���Ԫ��
    int i=0;
    while (i<L.length&&L.elem[i]!=e) i++;
    if(i<L.length) return i+1;//���ҳɹ����������
    return ERROR; //����ʧ�ܣ�����0
}



/*8.˳���ɾ������*/
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

/*�������Ա������Ԫ��*/
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
        printf("�����б�ɹ�");
    else
        printf("�б�����Ԫ��");
//    printf("%d",L.elem[3]);
//    ListInsert(&L,i,ElemType e)
    return 0;
}

