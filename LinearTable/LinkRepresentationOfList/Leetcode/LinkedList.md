## [21. 合并两个有序链表](https://leetcode.cn/problems/merge-two-sorted-lists/)

![image-20221118075934955](LinkedList.assets/image-20221118075934955.png)

### 思路

### 解法

#### 解法一：

~~~c
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
     struct ListNode* list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    if(list1 == NULL) return list2;
    else if(list2 == NULL) return list1;
   
    struct ListNode* a3 = list3;
    while(list1 && list2){
        if(list1->val <= list2->val)
        {
            a3->next = list1;
            a3 = list1;
            list1 = list1->next;
            a3 -> next = NULL;
        }
        else{
            a3->next = list2;
            a3 = list2;
            list2 = list2->next;
            a3 -> next = NULL;
        }
    } 
    a3->next=list1?list1:list2;
    return list3->next;
}
~~~

## [剑指 Offer II 024. 反转链表]([剑指 Offer II 024. 反转链表 - 力扣（Leetcode）](https://leetcode.cn/problems/UHnkqh/))

![image-20221118084909734](LinkedList.assets/image-20221118084909734.png)

### 思路

### 解法

#### 解法一：

~~~C
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
~~~

