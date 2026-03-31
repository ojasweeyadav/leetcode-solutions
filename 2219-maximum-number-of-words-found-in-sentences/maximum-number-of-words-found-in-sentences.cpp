class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int size=sentences.size();
        
        int max_c=0;
        for(string i : sentences){
            int count=0;
            for(char c : i){
                if (c==' ')count++;
            }
            max_c=max(max_c,count);
        }
        return max_c+1;    //words=spaces+1
    }
};