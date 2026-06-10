class Solution {
public:
    int roman(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int size=s.size();
        int sum=0;
        for(int i=0;i<size;i++){
            if(i+1<size && roman(s[i])<roman(s[i+1])){
                sum-=roman(s[i]);
            }
            else{
                sum+=roman(s[i]);
            }
        }
        return sum;
    }
};



/* NOT V MUCH OPTIMAL APPROACH
class Solution {
public:
    int romanToInt(string s) {
        int size=s.size();
        int sum=0;
        int i=0;
        while(i<size){
            if( i+1 < size && s[i]=='I' && s[i+1]=='V') {
                sum+=4;
                i+=2;
            }
            else if(i+1 < size && s[i]=='I' && s[i+1]=='X') {
                sum+=9;
                i+=2;
            }
            else if(i+1 < size && s[i]=='X' && s[i+1]=='L') {
                sum+=40;
                i+=2;
            }
            else if(i+1 < size && s[i]=='X' && s[i+1]=='C'){
                sum+=90;
                i+=2;
            } 
            else if(i+1 < size && s[i]=='C' && s[i+1]=='D') {
                sum+=400;
                i+=2;
            }
            else if(i+1 < size && s[i]=='C' && s[i+1]=='M'){
                sum+=900;
                i+=2;
            } 
            else{
                if(s[i]=='I')sum+=1;
                if(s[i]=='V')sum+=5;
                if(s[i]=='X')sum+=10;
                if(s[i]=='L')sum+=50;
                if(s[i]=='C')sum+=100;
                if(s[i]=='D')sum+=500;
                if(s[i]=='M')sum+=1000;
                i++;
            }
            
        }
        return sum;
    }
};
*/