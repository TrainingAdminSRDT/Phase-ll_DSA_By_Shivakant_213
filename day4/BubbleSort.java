package day4;

public class BubbleSort {
    void bubbleSort(int[] arr,int n) {
        
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        
            }
        }
        
    
    void printArray(int[] arr) {
        for (int i=0;i<arr.length;i++) {
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args) {
        BubbleSort ob = new BubbleSort();
        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        int n = arr.length;
        ob.bubbleSort(arr, n);
        System.out.println("Sorted array: ");
        ob.printArray(arr);
    }
    
}
