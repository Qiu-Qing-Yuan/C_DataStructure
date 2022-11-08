#ifndef SEQUENTIALREPRESENTATIONOFLIST_MAIN_H
#define SEQUENTIALREPRESENTATIONOFLIST_MAIN_H
#endif //SEQUENTIALREPRESENTATIONOFLIST_MAIN_H
//函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define INITSIZE 100
#define LISTINCREMENT 10
//Status 是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef int ElemType;
/*typedef struct {
    ElemType elem[MAXSIZE];
    int length;
}SqList;*/
typedef struct {
    ElemType *elem;
    int length;
    int listSize;
}SqList;
//struct {
//    ElemType *elem;
//    int length;
//};



