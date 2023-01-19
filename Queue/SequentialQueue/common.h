#include <time.h>
#include "stdio.h"
#include "malloc.h"
#define ElemType int
#define Status int
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define OVERFLOW 0
#define MAXQSIZE 100 //队列最大长度
#define QElemType int

typedef struct {
    QElemType* base; //初始化队列的动态分配存储空间
    int front; //头指针，若队列不空，指向队列头元素
    int rear; //尾指针。若队列不空，指向队列尾元素的下一个位置
}SqQueue;

/*循环顺序队列初始化*/
Status InitQueue(SqQueue* Q);
/*返回循环队列中元素个数*/
int QueueLength(SqQueue Q);
/*插入元素e为Q的新的队尾元素*/
Status EnQueue(SqQueue *Q,QElemType e);
/*删除队头元素*/
Status DeQueue(SqQueue *Q,QElemType *e);
/*取队头元素*/
QElemType GetHead(SqQueue Q);


