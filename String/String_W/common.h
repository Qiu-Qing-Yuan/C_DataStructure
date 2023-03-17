#include "stdio.h"
#include "malloc.h"
#define MaxLen 255 //预定义最大长为255
#define Status int
#define OK 1
#define ERROR 0



//静态数组实现（定长顺序存储）
typedef struct {
    char ch[MaxLen]; //每个分量存储一个字符
    int length; //串的实际长度
}SString;

//动态数组实现（堆分配存储）
typedef struct {
    char *ch; //按串长分配存储区，ch指向串的基地址
    int length; //串的长度
}HString;

