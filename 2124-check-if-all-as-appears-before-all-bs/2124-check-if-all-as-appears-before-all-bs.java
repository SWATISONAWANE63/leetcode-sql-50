class Solution {
    public boolean checkString(String s) {
        int n=s.length()-1;
        for(int i=0; i<n; i++){
            if(s.charAt(i+1)=='a' && s.charAt(i)=='b'){
                return false;
            }
        }
        return true;
    }
}