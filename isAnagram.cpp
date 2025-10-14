//进入哈希表啦
//字母异位词检测
#include<string>
#include<iostream>
using namespace std;
class Solution{
public:
    bool isAnagram(string s,string t){
        int record[26]={0};
        for(int i=0;i<s.size();i++){
            record[s[i]-'a']++;//无需记住字符a的ASCLL。求一个相对数值即可

        }

        for(int i=0;i<t.size();i++){
            record[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(record[i]!=0){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    
    // 测试用例1：基本字母异位词
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << "Test 1: " << (sol.isAnagram(s1, t1) ? "Pass" : "Fail") << endl;
    
    // 测试用例2：非字母异位词
    string s2 = "rat";
    string t2 = "car";
    cout << "Test 2: " << (sol.isAnagram(s2, t2) ? "Pass" : "Fail") << endl;
    
    // 测试用例3：空字符串
    string s3 = "";
    string t3 = "";
    cout << "Test 3: " << (sol.isAnagram(s3, t3) ? "Pass" : "Fail") << endl;
    
    // 测试用例4：长度不同的字符串
    string s4 = "a";
    string t4 = "ab";
    cout << "Test 4: " << (sol.isAnagram(s4, t4) ? "Pass" : "Fail") << endl;
    
    return 0;
}