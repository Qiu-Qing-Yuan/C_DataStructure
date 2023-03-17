//函数结果状态代码
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define INITSIZE 10
#define MAXSIZE 10 //默认最大长度10
#define LISTINCREMENT 10
//Status 是函数的类型，其值是函数结果状态代码
typedef int Status;
typedef int ElemType;



typedef struct {
    ElemType *data; //指示动态分配数组的指针
    int MaxSize; //顺序表的最大容量
    int length; //顺序表的当前长度
}SeqList;

/*typedef struct {
    ElemType *data;
    int length;
    int listSize;
}SeqList;*/





