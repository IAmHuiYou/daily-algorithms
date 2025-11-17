class Mystack{
public:
    queue<int> que1;
    queue<int>que2;

    Mystack(){

    }

    void push(int x){
        que1.push(x);
    }

    int pop(){
        int size=que1.size();
    }

    int pop(){
        int size=que1.size();
        size--;
        while(size--){
            que2.push(que1.front());
            que1.pop();
        }

        int result=que1.front();
        que1.pop();
        que1=que2;
        while(!que2.empty){
            que2.pop();
        }
        return result;
    }

    int top(){
        int size=que1.size();
        size--;
        while(size--){
            que2.push(que1.front());
            que1.pop();
        }

        int result-que1.front();
        que2.push(que1.front());
        que1.pop();

        que1=que2;
        while(!que2.empty()){
            que2.pop();
        }
        return result;
    }

    bool empty(){
        return que1.empty();
    }

};