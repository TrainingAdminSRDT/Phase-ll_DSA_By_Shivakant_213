import java.util.*;
class BubbleS{
    static void bubbleSort(int[] nums, int n){
        for(int i =0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }

            }
        }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        int n = sc.nextInt();
        int i,j;
        int[] nums = new int[n];
        for(i= 0; i<n;i++)
        nums[i] = sc.nextInt();
        bubbleSort(nums, n);
        for(i= 0; i<n;i++)
        System.out.print(nums[i] + " ");
    }
}