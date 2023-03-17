#include "stdio.h"
#define ElemType int
#define MaxSize 10 //默认最大长度10
#define Status int
#define OK 1
#define ERROR 0

//静态分配
typedef struct {
    ElemType data[MaxSize];//用静态分配的数组存放数据元素
    int length; //顺序表当前的长度
}SeqList; //顺序表的类型定义（静态分配方式）