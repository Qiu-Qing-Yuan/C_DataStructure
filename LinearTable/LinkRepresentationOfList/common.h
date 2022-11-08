#define ElemType int
#define Status int
#define OK 1
#define ERROR 0

typedef struct LNode //声明节点的类型和指向节点的指针类型
{
    ElemType data;
    struct LNode* next;
}LNode,* LinkList; //LinkList为指向结构体LNode的指针类型