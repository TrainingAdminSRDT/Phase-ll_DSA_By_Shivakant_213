package day1;

import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //INPUT NUMBERS
        System.out.println("Enter a number: ");
        int a=sc.nextInt();
        System.out.println("Enter another number: ");
        int b=sc.nextInt();
        //SWAP NUMBERS
        a=a+b;
        b=a-b;
        a=a-b;
        System.out.println("After swapping: ");
        System.out.println("First number: "+a);
        System.out.println("Second number: "+b);
        //SUM OF NUMBERS
        System.out.println("sum = "+(a+b));
        //SCOPE OF VARIABLES
        if(a>b){
            int count=1;
            System.out.println(count);

        }
        // System.out.print(count);---->Cannot find Symbol Error
        }
    }
    

