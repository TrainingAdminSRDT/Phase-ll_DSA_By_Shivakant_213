public class Reverse_array {
    public static void main(String[] args){
        int [] arr = {6,5,4,3,2,1};
        int l=0,r=arr.length-1;
        while(l<r){
            int temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
        }
        // Print the reversed array
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i] + " ");
        }
    }
}
