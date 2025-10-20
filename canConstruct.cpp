  class Solution{
public:
bool canConstruct(string ransomNote,string magazine){
    int record[26]={0};
    if(ransomNode.size()>magazine.size()){
        return false;
    }

    for(int i=0;i<magazine.length();i++){
        record[magazine[i]-'a']++;

    }

    for(int i=0;j<ransomNode.length();i++){
        record[ransomNode[i]-'a']--;
        if(record[ransomNote[j]-'a']<0){
            return false;
        }
    }
    return true;

}
  };