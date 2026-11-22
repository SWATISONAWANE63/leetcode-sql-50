class Solution {
    public boolean checkString(String s) {
        int n=s.length()-1;
       
        int firstB=s.indexOf('b');
        int lastA=s.lastIndexOf('a');
      //  if(firstB != -1 && lastA != -1) return false;
        for(int i=0; i<n; i++){
            if(firstB != -1 && lastA != -1 &&firstB<lastA){
                return false;
            }
        }
        return true;
    }
}