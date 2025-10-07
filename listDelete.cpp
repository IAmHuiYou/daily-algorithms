//删除链表节点练习
class Solution{
//分头节点和非头节点删除

pubilc:
    ListNode* removeElements(ListNode* head,int val){
        while(head!=NULL&&head->val==val){
            ListNode*tmp=head;
            head=head->next;
            delete tmp;
        }

        //非头节点
        ListNode*cur=head;
        while(cur!=NULL&&cur->next!=NULL){
            if(cur->next->val==val){
                ListNode*tmp=cur->next;
                cur->next=cur->next->next;
                delete tmp;
            }else{
                cur=cur->next;
            }
        }
        return head;
    }

};

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};

{
    /* data */
};


//用虚拟头节点
class Solution{
public:
    ListNode*removeElements(ListNode*head,int val){
        ListNode* dummyHead=new ListNode(0);//虚拟头节点
        dummyHead->next=head;
        ListNode* cur = dummyHead;
        while(cur->next!=NULL){
            if(cur->next->val==val){
                ListNode* tmp=cur->next;
                cur->next=cur->next->next;
                delete tmp;
            }else{
                cur=cur->next;
            }
        }
        head=dummyHead->next;
        delete dummyHead;
        return head;
    }

};