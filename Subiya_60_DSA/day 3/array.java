import java.util.*;
class array{
    public static void main(String[] args){
         Scanner sc = new Scanner (System.in);
         System.out.println("Enter size of array");
         int n = sc.nextInt();
         int [] arr = new int[n];
         int[] temp = new int[n];
         System.out.println("Enter elements of array");
         for (int i= 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
         for (int i=0; i<n;i++){
            System.out.print(arr[i]+" ");
        }
         for (int i= 0; i<n; i++){
            temp[i] = arr[n-i-1];
        }
         for(int i=0; i<n; i++){
            arr[i] = temp[i];
            System.out.println(arr[i]);
         }
    }
}