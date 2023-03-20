#include "stdio.h"
#include "malloc.h"
#include "main.h"

//1、顺序表初始化
/*Status InitList_Sq(SeqList *L){
    L->data = (ElemType*)malloc(sizeof (ElemType)*INITSIZE);
    if(!L->data) exit(OVERFLOW);//存储分配失败
    L->length=0;
    L->listSize = INITSIZE;//初始存储容量
    return OK;
}*/

void InitList(SeqList *L){
    //用malloc函数申请一片连续的存储空间
    L->data = (ElemType *)malloc(INITSIZE*sizeof (ElemType));
    if(!L->data) exit(OVERFLOW);
    L->length = 0;
    L->MaxSize = INITSIZE;
}

//获取对应位序元素
Status GetElem(SeqList L,int i,ElemType *e){
    if(L.length==0 || i<1 || i>L.length)
        return ERROR;
    *e = L.data[i-1];
    return OK;
}

void IncreaseSize(SeqList *L,int len){
    int i;
    ElemType *p = L->data;
    L->data = (ElemType *) malloc((L->MaxSize+len)*sizeof (ElemType));
    for (i = 0; i < L->length; i++) {
        L->data[i]=p[i];//将数据复制到新区域
    }
    L->MaxSize = L->MaxSize+len; //顺序表的最大长度增加len
    free(p); //释放原来的内存空间
}

//插入元素
Status ListInsert(SeqList *L,int i,ElemType e){
    int k;
    if(L->length == MAXSIZE)
        return ERROR;//顺序表已满
    if(i<1 || i>L->length+1) //插入位置不合法
        return ERROR;
    if(i<=L->length){
        //若插入数据位置不在表尾
        for(k=L->length-1;k>=i-1;k--){
            L->data[k+1]=L->data[k];
        }
    }
    L->data[i-1]=e;//新元素插入
    L->length++;
    return OK;
}


//7、插入元素（在线性表L的第i个位置之前插入新的元素e）
/*Status ListInsert(SeqList *L,int i,ElemType e){
    int j;
    if((i<1)||(i>L->length+1)) return ERROR;
    if(L->length>=L->listSize) {
        ElemType* newBase = (ElemType * ) realloc(L->data,
                                                  (L->listSize+LISTINCREMENT) * sizeof (ElemType));
        if(!newBase) exit(OVERFLOW);
        L->data = newBase;//新基地址
        L->listSize += LISTINCREMENT;
    }
    for(j=L->length-1;j>i-1;j--)
        L->data[j+1]=L->data[j];
    L->data[i-1] = e;
    ++L->length;
    return OK;
}*/




//2、销毁顺序表
void DestroyList(SeqList *L){
    if(L->data) free(L);
}

//3、清空线性表
void ClearList(SeqList *L){
    L->length=0;
}

//4、求线性表的长度
int GetLength(SeqList L){
    return L.length;
}

//5、判断线性表是否为空
int IsEmpty(SeqList L){
    if(L.length==0) return 1;
    else return 0;
}

//6、顺序表查找
int LocateElem(SeqList L,ElemType e){
    //返回是第几个元素
    int i=0;
    while (i<L.length&&L.data[i]!=e) i++;
    if(i<L.length) return i+1;//查找成功，返回序号
    return ERROR; //查找失败，返回0
}

//8.顺序表删除操作
Status ListDelete(SeqList *L,int i,int *e){
    int j;
    if(i<1||i>L->length) return ERROR;
    *e = L->data[i-1];
    for(j=i;j<=L->length-1;j++)
        L->data[j-1] = L->data[j];
    --L->length;
    return OK;
}



/*遍历线性表的所有元素*/
Status ListAll(SeqList L){
    int i=0;
    if(L.length==0) return ERROR;
    printf("[");
    for (i = 0; i < L.length; ++i) {
        if(i!=L.length-1)
            printf("%d,",L.data[i]);
        else printf("%d",L.data[i]);
    }
    printf("]\n");
    return OK;
}






int main(){
    SeqList L; //声明一个顺序表
    InitList(&L); //初始化顺序表
    //往顺序表中随表插入几个元素...
    IncreaseSize(&L,5);
    return 0;
}













