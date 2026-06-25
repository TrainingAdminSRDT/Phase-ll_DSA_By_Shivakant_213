/* isme 2 array banayenge aur unme original array ko 2 part me divide krke likh lenge 
arr1 me last se k elements store kr lenge 
arr2 me bche hue elements 
arr = arr1 + arr2
*/
class Solution {
    public void rotate(int[] nums, int k) {
       int n = nums.length;
       k = k%n;
       reverse (nums,0,n-1);
       reverse (nums, 0, k-1);
       reverse (nums,k,n-1);
    }
    void reverse(int[] arr, int l,int r){
        int temp;
        while (l<r){
            temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
}