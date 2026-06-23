package day5;
import java.util.Scanner;
public class Factorial {
    int fact(int n){
        if(n==0){
            return 1;
        }
        else {
            return n*fact(n-1);
        }
}
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
        Factorial f = new Factorial();
        System.out.println("Enter a number to find its factorial: ");
        int n=sc.nextInt();
        int result = f.fact(n);
        System.out.println("Factorial of "+ n +" = "+ result);
    }
    
    
}
