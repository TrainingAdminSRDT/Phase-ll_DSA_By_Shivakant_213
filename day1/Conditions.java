package day1;
import java.util.Scanner;
public class Conditions {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //INPUT NUMBERS
        System.out.println("Enter a number: ");
        int a=sc.nextInt();
        
        //IF-ELSE STATEMENT
        if(a%2==0){
            System.out.println(a+" is even");
        }
        else{
            System.out.println(a+" is odd");
        }
    }
    
}
