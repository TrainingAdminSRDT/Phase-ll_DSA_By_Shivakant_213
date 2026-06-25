import java.util.*;
class TCSC
{ 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
         // count max no.
        int mx = arr[0]
          for(int i =1; i<n;i++){                // SC --> O(n)
             mx = Maths.max(mx,arr[i])          // TC --> O(n)
         }
         // count even no.
         int cnt = 0;
         for (int i = 0; i<n; i++){         //SC --> O(n)
            if(arr[i]%2==0)                 // TC--> O(n)
                 cnt++;
        }
        //Nested loop
        for (int i = 0; i < n; i++) {                //SC --> O(1)
            for (int j =0; j<n; j++){                   // TC--> O(n^2)
                System.out.printf("i:%d , j:%d",i,j)
            }
        }
        #Triangle loop
        for(int i=0; i<n;i++>){                 //SC --> O(n)
            for (int j =0; j<=i; j++){            // TC--> O(n^2)
                System.out.println(j)
            }
        }
        // Binary Search
        while(low<=high){
            int mid = low + (high-low)/2;        // TC-->O(log n)
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target)
        }
        // two pointers
        int l=0. r=n-1;
        while(l<r){          
            l++;              // Tc --> O(n/2) = O(n)
            r--;
        }
        //Reverse array
        for(int i=0; i<n/2;i++>){            // Tc --> O(n/2) = O(n)
            swap(arr[i], arr[n-i-1]);
        }
        //Logarithmic loop
        for(int i=n; i>0;i/=2>){             // TC-->O(log n)
            System.out.println(i)
        }
        //Doubling loop
         for(int i=1; i<n;i*=2>)                O(n)
              Sout(i)
              
        //Fibonacci
        int fib(int n){
            if(n<=1) return n;                  O(2^n)
            return fib(n-1) + fib(n-2);
        }

    }
}