import java.util.*;
class TwoPointer{
    public static void main(String[] args){
         Scanner sc = new Scanner (System.in);
         System.out.println("Enter size of array");
         int n = sc.nextInt();
         int [] arr = new int[n];

         System.out.println("Enter elements of array");

         for (int i= 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
         for (int i= 0; i<n; i++){
            System.out.print(arr[i] + " "); 
        }
        
        System.out.println("\n);
        int l = 0, r = n-1;
        int temp;
        while(l<r){
            temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        for (int i= 0; i<n; i++){
            System.out.print(arr[i] + " "); 
        }
    }
}