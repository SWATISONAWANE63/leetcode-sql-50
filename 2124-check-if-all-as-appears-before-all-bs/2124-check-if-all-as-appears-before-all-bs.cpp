class Solution {
public:
    bool checkString(string s) {
        int n=s.size()-1;
        for(int i=0; i<n; i++){
            if(s[i+1]=='a' && s[i]=='b'){
                return false;
            }
        }
        return true;
    }
};