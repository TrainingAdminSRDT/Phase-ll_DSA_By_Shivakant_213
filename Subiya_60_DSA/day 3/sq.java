
import java.util.Scanner;

class sq{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans =2, l=0, r=n, mid;
        mid = l + (r-l)/2;
        while(l<=r){
            mid = l + (r-l)/2;
            if(n<mid*mid)
                r= mid-1;
            else
                ans = Math.max(ans,mid);
                l = mid+1;
        }
        System.out.println(ans );
    }
}
