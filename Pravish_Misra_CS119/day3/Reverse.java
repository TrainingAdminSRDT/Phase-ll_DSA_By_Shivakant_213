package day3;
import java.util.Scanner;
public class Reverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("The reversed array is:");
        int temp[] = new int[n];
        for(int i=0;i<n;i++){
            temp[i] = arr[n-1-i];
        }
        for(int i=0;i<n;i++){
            System.out.print(temp[i] + " ");
        }
    }
}
