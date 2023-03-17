#include "common.h"

/*构造一个空队列*/
Status InitQueue(LinkQueue* Q){
    /*构造一个空队列Q*/
    Q->front = Q->rear = (QueuePtr) malloc(sizeof (struct QNode));
    if(!Q->front) exit(OVERFLOW); //存储分配失败
    Q->front->next = NULL;
    return OK;
}
/*销毁队列Q，Q不再存在*/
int DestroyQueue(LinkQueue* Q){
    /*销毁队列Q
        思路：从队头结点开始，依次释放所有结点。 */
/*    QueuePtr p;
    while(Q->front){
        p = Q->front->next;
        free(Q->front);
        Q->front = p;
    }*/

    //利用现成的指针，少用一个变量
    while(Q->front){
        Q->rear = Q->front->next;
        free(Q->front);
        Q->front = Q->rear;
    }
    return OK;
}
/*将队列Q清空为空队列*/
Status ClearQueue(LinkQueue* Q);
/*若队列Q为空队列，则返回TRUE，否则返回FALSE*/
Status QueueEmpty(LinkQueue Q);
/*返回Q的元素的个数，即为队列的长度*/
int QueueLength(LinkQueue Q);
/*若队列不空，则用e返回Q的队头元素，并返回OK；否则返回ERROR*/
Status GetHead(LinkQueue Q,QElemType* e){
    if(Q.front == Q.rear) return ERROR;
    *e = Q.front->next->data;
    return OK;
}
/*插入元素e为Q的新的队尾元素*/
Status EnQueue(LinkQueue *Q,QElemType e){
    /*插入元素e为Q的新的队尾元素*/
    QueuePtr p = (QueuePtr) malloc(sizeof (SqQueue));
    if(!p) exit(OVERFLOW); //存储分配失败
    p->data = e;
    p->next = NULL;
    Q->rear->next = p;
    Q->rear = p;
    return OK;
}
/*若队列不空，则删除Q的队头元素，用e返回其值，并返回OK
    *否则返回ERROR*/
Status DeQueue(LinkQueue* Q,QElemType* e){
    if(Q->front == Q->rear) return ERROR;
    QueuePtr p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;
    if(Q->rear == p) Q->rear = Q->front;
    free(p);
    return OK;
}
/*从队头到队尾依次对队列Q中每个元素调用函数visit()。一旦visit失败，则操作失败*/
Status QueueTraverse(LinkQueue Q,visit());