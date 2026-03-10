# 补卡Day3| **203.移除链表元素**  ， **707.设计链表** ，**206.反转链表** 

## 203.移除链表元素

[203.移除链表元素 | 代码随想录](https://programmercarl.com/0203.移除链表元素.html)

## 我的思路

虚拟头节点

## 问题总结

**1.listnode 和listnode*什么时候用**

代码里面定义的第一个Listnode是一个节点所以是Listnode

第二个是代表指向当前节点的指针所以应该用*并且后面的对象也要加上地址符

**2.访问一个对象的成员一定要判断这个对象为不为空**

**3.只有当没有删除结点才往后面移动一个，如果删除了已经往后面移动了，不需要再移动一次了**

**4.指针->**

**对象.**

**5.很重要的一点是,要删除某个节点一定要指向这个节点的前一位,指向这个节点是删不掉这个节点的.**

## 卡的思路

## 我的代码

```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
            ListNode nummyhead(0,head);
            ListNode* now=&nummyhead;
            while(now!=NULL){
                if(now->next&&now->next->val==val)now->next=now->next->next;
                else
                now=now->next;
            }
            return nummyhead.next;
        
    }
};
```

##  **707.设计链表**  

[707.设计链表 | 代码随想录](https://programmercarl.com/0707.设计链表.html)

## 我的思路

写一下看看，有点多。

## 问题总结

虽然是补卡，但是问题也不少。

1.链表结点和链表初始化的方式

```
 struct listNode{
        int val;
        listNode* next;
        listNode(int val):val(val),next(NULL){}
    };

    listNode* _dummyNode;
    int _size;

    MyLinkedList(){
        _dummyNode = new listNode(0);
        _size = 0;
    }
```

2.对链表操作一定要注意合法性，不用访问不存在的结点。

## 卡的思路

## 我的代码

```
class MyLinkedList {
public:
       struct listNode{
        int val;
        listNode* next;
        listNode(int val):val(val),next(NULL){}
    };

    listNode* _dummyNode;
    int _size;

    MyLinkedList(){
        _dummyNode = new listNode(0);
        _size = 0;
    }
    int get(int index) {
        if(index>_size-1||index<0)return -1;
        listNode* cur=_dummyNode->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;   
    }
    
    void addAtHead(int val) {
        listNode* node=new listNode(val);
        node->next=_dummyNode->next;
        _dummyNode->next=node;
        _size++;  
    }
    
    void addAtTail(int val) {
        listNode* cur=_dummyNode;
        while(cur->next){
            cur=cur->next;
        }
        listNode* node=new listNode(val);
        cur->next=node;
        _size++;
        return;
    }
    
    void addAtIndex(int index, int val) {
        listNode* cur=_dummyNode;
        if(index>_size)return;
        while(index>0){
            cur=cur->next;
            index--;
        }
        listNode* node=new listNode(val);
        node->next=cur->next;
        cur->next=node;
        _size++;
        return;
        
    }
    
    void deleteAtIndex(int index) {
       if (index >= _size || index < 0) {
            return;
        }
        listNode* cur = _dummyNode;
        while(index--) {
            cur = cur ->next;
        }
        listNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp=nullptr;
        _size--;
    }
};
```



## **206.反转链表**

[206.反转链表 | 代码随想录](https://programmercarl.com/0206.翻转链表.html)

## 我的思路

昨天看过思路了。翻转每个链表中间的指针即可一个pre,一个cur，再存一个cur->next，每次一起向后移动一位。

## 问题总结

1.作用域问题

```
ListNode* pre=head;
if(pre->next) ListNode* cur=pre->next;
else return head;
```

只在 `if` 语句内部有效。

所以到了下面：

```
while(cur->next)
```

编译器会说：

```
use of undeclared identifier 'cur'
```

因为 **`cur` 已经离开作用域了**。

正确写法

先声明变量，再赋值：

```
ListNode* pre = head;
ListNode* cur;

if(pre->next) cur = pre->next;
else return head;
```

2.原来的 `head->next` 没有被断开，形成了环。

```
ListNode* pre = head;
ListNode* cur = NULL;

if(pre->next) cur = pre->next;
```

此时链表还是：

```
1 -> 2 -> 3 -> 4 -> null
↑
pre
      ↑
      cur
```

------

第一轮循环

执行：

```
cur->next = pre;
```

变成：

```
1 <- 2    3 -> 4
↑    ↑
pre  cur
```

但是注意！！！

```
1 -> 2
```

**这个指针还在！**

所以现在链表结构是：

```
1 <-> 2
```

形成了一个 **环**。

## 卡的思路

## 我的代码

```
public:
    ListNode* reverseList(ListNode* head) {
          if(!head) return head;

    ListNode* pre = head;
    ListNode* cur = head->next;
    pre->next = NULL;   

    ListNode* tmp = NULL;

    while(cur){
        tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    return pre;
    }
};
```

