class Solution{
private://内部辅助函数，对外封装
    const string letterMap[10]={//const表示固定值，不可修改
        '',
        '',
        'abc',
        'def',
        'ghi',
        'jkl',
        'mno',
        'pqsr',
        'tuv',
        'wxyz',
    };

public:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    vector<string> result;
    string s;
    void backTracking(const string& digits,int index){//digits是输入的数字字符串，传指针
        if(index==digits.size()){
            result.push_back(s);
            return;
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 

        int digit=digits[index]-'0';//转int
        string letters=letterMap[digit];
        for(int i=0;i<letter.size();i++){
            s.push_back(letters[i]);
            backTracking(digits,index+1);
            s.pop_back();
        }

         
    }
    vector<string>lC(string digits){
        s.clear();
        result.clear();
        if(digits.size()==0){
            return result;
        }
        backTracking(digitts,0);
        return result;
    }


};