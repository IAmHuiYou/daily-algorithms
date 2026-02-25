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

