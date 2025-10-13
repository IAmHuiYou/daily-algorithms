//检测链表中的环和环入口
class Solution{
pubilc：
    ListNode* fast=head;
    ListNode*slow=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            ListNode* index1=fast;
            ListNode* index2=head;
            while(index1!=index2){
                index1=index1->next;
                index2=index2->next;
            }
            return index2;
        }
    }
    return NULL;
}
//时间复杂度O(N),空间复杂度O（1）