class Solution {
    public int lengthOfLastWord(String s) {
        s =s.trim();
        String s1 = s.substring( s.lastIndexOf(" ")+1);
        return (s1.length());
    }
}