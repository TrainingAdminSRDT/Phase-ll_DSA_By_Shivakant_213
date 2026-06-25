class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // int[] temp = new int[m+n];
        // int l = 0, k=0;
        // for(int i =0; i<m+n; i++){
        //     if(nums1[l]<nums2[r]){
        //         temp[i] = nums1[l];
        //         l++;
        //     }
        //     else{
        //             temp[i] = nums2[r];
        //         r++;
        //  }


            int i= m-1, j= n-1, k =m+n-1;
            while(j>=0){
                if(i>=0 && nums1[i]>nums2[j]){
                    nums1[k] = nums1[i];
                    i--;
                }
                else{
                    nums1[k] = nums2[j];
                    j--;
                    
                }
                k--;
            
        }
    }
}