// public class ABC{
//         public static void main(String[]args){
//         int[] arr ={1,2,3,4,5};
//         for(int i=0;i<arr.length;i++){
//             System.out.print(arr[i] + " ");
//         }
//     }
// }
// Reverse an Array

public class ABC{
    public static void main(String[]args){
        int[] arr ={5,6,8,1,2,3};
        int temp[];
        int n= arr.length;
        for(int i=0;i<arr.length;i++){
            temp[i]=arr[n-i-1];
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
    }
}

