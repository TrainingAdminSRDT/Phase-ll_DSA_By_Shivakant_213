class Solution {
    public int lengthOfLastWord(String s) {
         int i =s.length()-1;
        while (i >= 0 && s.charAt(i) == ' ') {
            i=i-1;
        }
        int c = 0;
        while (i >= 0 && s.charAt(i) != ' ') {
            c=c+1;
            i=i-1;
        }

        return c;
    }
}