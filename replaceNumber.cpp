#include <iostream>
using namespace 
int main(){
    string s;
    while(cin>>s){
        int sOLDIndex=s.size()-1;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<'9'){
            count++;
            }
        }

        s.reverse(s.size()+count*5);
        int sNEWIndex=s.size()-1;
        while(sOLDIndex>=0){
            if(s[sOLDIndex]>='0'&&s[sOLDIndex]<='9'){
                s[sNEWIndex--]='r';
                s[sNEWIndex--]='e';
                s[sNEWIndex--]='b';
                s[sNEWIndex--]='m';
                s[sNEWIndex--]='u';
                s[sNEWIndex--]='n';
            }else{
                s[sNEWIndex--]=s[sOLDIndex];
            }
            sOLDIndex--;
        }
        cout<<s<<endl;

    }
}

