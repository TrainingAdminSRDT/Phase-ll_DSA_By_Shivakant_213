class Solution {
    public boolean isPalindrome(int x) {
        int k =x;
        long rev =0;
        while(x>0){
            int r = x%10;
            rev = rev *10 +r;
            x = x/10;
        }
        if (k==rev){
            return true;
        }
        else{
            return false;
        }
    }
}