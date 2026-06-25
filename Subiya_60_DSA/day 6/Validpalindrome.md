class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        // String s1 = "", s2="";
        // for(int i =0; i< s.length(); i++){
        //    if(Character.isLetterOrDigit(s.charAt(i))){
        //     s1 = s1 + s.charAt(i);
        //     s2 = s.charAt(i) + s2;
        //    }
        // }
        // return (s1.equals(s2));

        int l =0, r = s.length()-1;
        while(l<=r){
            if(!Character.isLetterOrDigit(s.charAt(l))){
                l++;
                continue;
            }
            if(!Character.isLetterOrDigit(s.charAt(r))){
                r--;
                continue;
            }

                if(s.charAt(l) != s.charAt(r)) return false;
               
                l++;
                r--;
            

        }
        return true;
    }
}