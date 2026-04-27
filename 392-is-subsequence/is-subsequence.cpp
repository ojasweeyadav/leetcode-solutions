class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int i=0; //s
        int j = 0;  //t

        while(s[i]!='\0' && t[j] != '\0'){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
            
        }
        if(s[i]=='\0')return true;
        return false;
    }
};