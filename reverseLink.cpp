//双指针法
#include<iostream>
#include<vector>
#include<math>
//仅练习写头文件

//双指针法
class Solution{
public:
ListNode* reverList(ListNode* head){
    ListNode* temp;//保存cur的下一个节点
    ListNode*cur=head;
    List*pre=NULL;
    while(cur){
        temp=cur->next;
        cur->next=pre;
        //更新pre和cur
        pre=cur;
        cur=temp;
    }
    return pre;

}

};
//时间复杂度O（n），空间复杂度O（1）

//递归法
class Solution{
public:
ListNode* reverse(ListNode* pre,ListNode* cur){
    if(cur==NULL)return pre;
    ListNode* temp=cur->next;
    cur->next=pre;
    return reverse(cur,temp);
}
ListNode* reverseList(ListNode* head){
    return reverse(NULL,head);
}
};
//时间复杂度O(N),空间复杂度O（n）n层栈空间