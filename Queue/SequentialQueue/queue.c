#include "common.h"

/*循环顺序队列初始化
 * 循环队列的初始化操作就是动态分配一个预定义大小为MAXQSIZE的数组空间
    * ① 为队列分配一个最大容量为MAXQSIZE的数组空间，base指向数组空间的首地址
    * ② 头指针和尾指针置为0，表示队列为空*/
Status InitQueue(SqQueue *Q) {
//构造一个空队列Q
    Q->base = (QElemType *) malloc(MAXQSIZE * sizeof(QElemType));
    if (!Q->base) exit(OVERFLOW);//存储分配失败
    Q->front = Q->rear = 0; //头指针和尾指针设置为0，队列为空
    return 0;
}

/*求队列中元素个数
    * 对于非循环队列，尾指针和头指针的差值便是队列长度，而对于循环队列，
        差值可能为负数，所以需要将差值加上MAXQSIZE，然后与MAXSIZE求余*/
int QueueLength(SqQueue Q){
    //队列的长度
    return (Q.rear-Q.front + MAXQSIZE) % MAXQSIZE;
}

/*插入元素e为Q的新的队尾元素（入队）
    * ① 判断队列是否满，若满则返回ERROR。
    * ② 将新元素插入队尾。
    * ③ 队尾指针加1。*/
Status EnQueue(SqQueue *Q,QElemType e){
    /*插入元素e为Q的新的队尾元素*/
    if((Q->rear+1)%MAXQSIZE == Q->front) return ERROR; //队列已满
    Q->base[Q->rear] = e;
    Q->rear = (Q->rear + 1) % MAXQSIZE;
    return OK;
}
/*删除队头元素
    * ① 判断队列是否为空，若为空则返回ERROR。
    * ② 保存队头元素。
    * ③ 队头指针加一*/
Status DeQueue(SqQueue *Q,QElemType *e){
    /*若队列不空，则删除Q的队头元素，用e返回其值，并返回OK
     * 否则返回ERROR*/
    if(Q->front == Q->rear) return ERROR;
    *e = Q->base[Q->front];
    Q->front = (Q->front + 1) % MAXQSIZE;
    return OK;
}
/*取队头元素*/
QElemType GetHead(SqQueue Q){
    //返回Q的队头元素，不修改头指针
    if(Q.front!=Q.rear) //队列非空
        return Q.base[Q.front]; //返回队头元素的值
}


int main() {
    printf("Hello, World!\n");
    return 0;
}