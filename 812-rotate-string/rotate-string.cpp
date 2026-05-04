class Solution {
public:
//String matching using KMP(Knuth - Morris - Patt)
    vector<int> buildLPS(string pattern) {
        int n = pattern.size();
        vector<int> lps(n, 0);

        int len = 0;   //len = length of pattern matched so far
        for (int i = 1; i < n; ) {
            if (pattern[i] == pattern[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }
        return lps;
    }

    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        string text = s + s;
        vector<int> lps = buildLPS(goal);

        int i = 0, j = 0;
        while (i < text.size()) {
            if (text[i] == goal[j]) {
                i++; j++;
                if (j == goal.size()) return true;
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return false;
    }
};
//
/*
Why lps[j-1]?
Because:
j-1 is last matched index
lps[j-1] = longest prefix = suffix for that part
*/

/*
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        if(n!=m) return false;
        if((s+s).find(goal)!=string::npos){
            return true;
        }
        return false;   //return n == m && (s + s).find(goal) != string::npos;  (shorter)
    }
};


Complexity
Time: O(n²) worst-case (find)
Space: O(n)

For Rotate String:
A string goal is a rotation of s
if and only if
goal is a substring of (s + s)
(see NOTE)

uses string matching internally
*/