#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    string removeDuplicates(string S){
        string result;
        for(char s:S){
            if(result.empty()||result.back()!=s){
                result.push_back(s);
            }
            else{
                result.pop_back();
            }
        }
        return result;
    }
};

int main(){
    Solution sol;
    cout<<sol.removeDuplicates('abbaca')<<endl;
    cout<<sol.removeDuplicates('azxxzy')<<endl;
    return 0;
}