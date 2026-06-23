package leetcode;
public class PallindromeLeetcode {
    public boolean isPalindrome(int x) {
        long rev=0;
        int n=x;
        while(n>0){
            int rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;

        }
        return (rev==x);
        
    }
}