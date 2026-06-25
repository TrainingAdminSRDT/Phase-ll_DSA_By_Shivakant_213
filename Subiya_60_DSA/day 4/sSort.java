import java.util.*;
class sSort{
     static void selectionSort(int[] nums, int n){
        int i,j;
        for( i =0; i<n-1; i++){
            int min = i;
            for( j =i+1; j<n; j++){
                if(nums[min] > nums[j])
                  min = j;
            }
            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        
        int n = sc.nextInt();
        int [] nums = new int[n];
        for( int i =0; i<n; i++)
           nums[i] = sc.nextInt();

         selectionSort(nums, n);
         for(int i =0; i<n; i++)
             System.out.print(nums[i]+" ");
    }
}
