class Solution {
public:
    bool checkString(string s) {
        bool seenB=false;
        int n=s.size();
        for(char c :s){
            if(c=='b'){
                seenB=true; //"aaaa"
            }else if(seenB){
                return false;
            }


        }
        return true;

    }
};