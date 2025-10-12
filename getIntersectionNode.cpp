//求两个单链表相交的起始节点
//其实就是求相交节点的指针，一定要指针相等
class Solution{
public:
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val=x,next=NULL{};
}
    ListNode* getIntersectionNode(ListNode *headA,ListNode* headB){
        ListNode* curA=headA;
        ListNode*curB=headB;
        int lenA=0,lenB=0;
        while(curA!=NULL){
            lenA++;
            curA=curA->next;
        }

        while(curB!=NULL){
            lenB++;
            curB=curB->next;
        }
        curA=headA;
        curB=headB;  //链表指回去

        // 让curA为最长链表的头，lenA为其长度
        if (lenB > lenA) {
            swap (lenA, lenB);
            swap (curA, curB);
        }
        // 求长度差
        int gap = lenA - lenB;
        // 让curA和curB在同一起点上（末尾位置对齐）
        while (gap--) {
            curA = curA->next;
        }
        // 遍历curA 和 curB，遇到相同则直接返回
        while (curA != NULL) {
            if (curA == curB) {
                return curA;
            }
            curA = curA->next;
            curB = curB->next;
        }
        return NULL;
    }
}

//时间复杂度O（n+m）
//空间复杂度（1）