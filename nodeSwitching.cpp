//两两调换链表节点

class Solution{
public:

    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x):val(x),next(NULL){}
    }

    ListNode* swapPiars(ListNode* head){
        ListNode* dummyHead=new ListNode(0);
        dummyHead->next=head;

        ListNode* cur=dummyHead;
        while(cur->next!=nullptr&&cur->next->next!=nullptr){
            ListNode*tmp=cur->next;
            ListNode*tmp1=cur->next->next->next;

            cur->next=cur->next->next;
            cur->next->next=tmp;
            cur->next->next->next=tmp1;

            cur=cur->next->next;
        }

        ListNode* result=dummyHead->next;
        delete dummyHead;
        return result;

    }
};