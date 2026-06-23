package day1;

import java.util.Scanner;
public class Pallindrome {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        //INPUT NUMBER
        System.out.println("Enter a number: ");
        int num=sc.nextInt();
        int originalNum=num;
        int reverse=0;
        //CHECKING PALLINDROME
        while(num!=0){
            int digit=num%10;
            reverse=reverse*10+digit;
            num/=10;
        }
        if(originalNum==reverse){
            System.out.println(originalNum+" is a Pallindrome");
        }
        else{
            System.out.println(originalNum+" is not a Pallindrome");
        }
        
    }   
    
}
