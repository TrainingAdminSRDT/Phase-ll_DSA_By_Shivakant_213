class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        String s1 = "", s2="";
        for(int i =0; i< s.length(); i++){
           if(Character.isLetterOrDigit(s.charAt(i))){
            s1 = s1 + s.charAt(i);
            s2 = s.charAt(i) + s2;
           }
        }
        return (s1.equals(s2));
    }
}