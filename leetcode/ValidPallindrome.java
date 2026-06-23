package leetcode;
class Solution {
    public boolean isPalindrome(String s) {
        if (s.isEmpty()) {
        	return true;
        }
        int start = 0;
        int last = s.length() - 1;
        while(start <= last) {
        	char f = s.charAt(start);
        	char l = s.charAt(last);
        	if (!Character.isLetterOrDigit(f)) {
        		start++;
        	} else if(!Character.isLetterOrDigit(l)) {
        		last--;
        	} else {
        		if (Character.toLowerCase(f) != Character.toLowerCase(l)) {
        			return false;
        		}
        		start++;
        		last--;
        	}
        }
        return true;
    }
}
        
