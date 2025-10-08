/* 这道题目设计链表的五个接口：

获取链表第index个节点的数值
在链表的最前面插入一个节点
在链表的最后面插入一个节点
在链表第index个节点前面插入一个节点
删除链表的第index个节点*/

//虚拟头节点
class MyLinkedList{
public:
    struct LinkedNode{//节点结构体
        int val;//value
        LinkedNode*next;
        LinkedNode(int val):val(val),next(nullptr){}
    };
    
    //初始化链表
    MyLinkedList(){//链表构造函数，实际上只存头节点和size，且都是私有变量
        _dummyHead=new LinkedNode(0);//虚拟头节点
        _size=0;//私有成员变量
    }

    int get(int index){
        if(index>(_size-1)||index<0){
            return -1;
        }

        LinkedNode*cur=_dummyHead->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;

    }

    // 在链表最前面插入一个节点，插入完成后，新插入的节点为链表的新的头结点
    void addAtHead(int val){
        LinkedNode* newNode=new LinkedNode(val);
        newNode->next=_dummyHead->next;//插入原来的头节点前面
        _dummyHead->next=newNode;//虚拟头节点重新放最前面
        _size++;
    }

    void addAtTail(int val){//
        LinkedNode*newNode=new LinkedNode(val);
        LinkedNode*cur=_dummyHead;//current当前处理的节点
        while(cur->next!=nullptr){
            cur=cur->next;
        }
        cur->next=newNode;
        _size++;
    }

     // 在第index个节点之前插入一个新节点，例如index为0，那么新插入的节点为链表的新头节点。
    // 如果index 等于链表的长度，则说明是新插入的节点为链表的尾结点
    // 如果index大于链表的长度，则返回空
    // 如果index小于0，则在头部插入节点
    void addAtIndex(int index,int val){
        if(index>_size)return;
        if(index<0)index=0;
        LinkedNode*newNode=new LinkedNode(val);
        LinkedNode*cur=_dummyHead;
        while(index--){
            cur=cur->next;
        }
        newNode->next=cur->next;
        cur->next=newNode;
        _size++;
    }

     // 删除第index个节点，如果index 大于等于链表的长度，直接return，注意index是从0开始的
    void deleteAtIndex(int index){
        if(index>=_size||idnex<0){
            return;
        }
        LinkedNode*cur=_dummyHead;
        while(index--){
            cur=cur->next;

        }
        LinkedNode*tmp=cur->next;
        cur->next=cur->next->next;
        delete tmp;
        tmp=nullptr;
        _size--;
    }

    void printLinkList(){
        LinkedNode*cur=_dummyHead;
        while(cur->next!=nullptr){
            cout<<cur->next->val<<" ";
            cur=cur->next;
        }
        cout<<endl;
    }
    private:
        int _size;
        LinkedNode* _dummyHead;
    
};