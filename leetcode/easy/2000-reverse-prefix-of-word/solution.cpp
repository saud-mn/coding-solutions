class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        int flag=0;
        int flag2=0;
        string ans="";
        for(int i=0;i<word.size();i++){
         if(!flag&&word[i]==ch){
             ans=word.substr(j,i-j+1);
            reverse(ans.begin(),ans.end());
            flag=1;
            continue;

         }
         if(flag){
            ans+=word[i];
         }
        }
        if(flag){
            return ans;

        }
        return word;
        
    }
};