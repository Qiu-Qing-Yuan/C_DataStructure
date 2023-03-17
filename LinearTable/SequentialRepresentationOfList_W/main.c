#include "common.h"


Status InitList(SeqList *L){
    //给int类型变量赋予初值0是编译器完成的，所以并不是每个编译器都会给int类型变量赋予初值
    int i;
    for (i = 0; i < MaxSize; ++i) {
        L->data[i] = 0; //将所有的数据元素设置为默认值
    }
    L->length = 0;//顺序表的初始长度为0
}

Status LocateElem(SeqList L,int e){
    int i = 0;
    for ( i = 0; i < L.length; i++) {
        if(L.data[i] == e)
            return i+1;
    }
    return ERROR;
}

//静态分配的顺序表插入操作
Status ListInsert(SeqList* L,int i,int e){
    int j;
    if(i<1 || i>L->length+1) //判断i的范围是否有效
        return ERROR;
    if(L->length>=MaxSize) //当前存储空间已满，不能插入
        return ERROR;
    for ( j = L->length; j>=i ; j--) {
        //将第i个元素之后的元素后移
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    L->length++;
    return OK;
}

//删除元素
Status ListDelete(SeqList *L,int i,int *e){
    int j;
    if(i<1 || i>L->length) //判断i的范围是否合法
        return ERROR;
    *e = L->data[i-1];//将被删除的元素赋值给e
    for (j = 0; j < L->length; ++j) {
        L->data[j-1] = L->data[j];
    }
    L->length--;
    return OK;
}

Status GetElem(SeqList *L,int i,int *e){
    if(i<1 || i>L->length) return ERROR;
    *e = L->data[i-1];
    return OK;
}

/*int main() {
    SeqList L;//声明一个顺序表
    InitList(&L);//初始化顺序表
    //...插入几个元素
    int e = -1;//用变量e把删除的元素带回来
    if(ListDelete(&L,3,&e))
        printf("已经删除第3个元素，删除元素的值为=%d\n",e);
    else
        printf("位序i不合法，删除失败\n");
    return ERROR;
}*/

int main(){
    SeqList L;//声明一个顺序表，分配内存空间
    int i;
    InitList(&L);//初始化顺序表

    //尝试违规打印整个data数组
    for (i = 0; i < MaxSize; i++) {
        printf("data[%d]=%d\n",i,L.data[i]);
    }
}
