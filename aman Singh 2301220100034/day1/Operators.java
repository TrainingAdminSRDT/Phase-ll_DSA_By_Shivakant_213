package day1;
import java.util.Scanner;
public class Operators {
    public static void main(String[] args) {
System.out.println("Enter a number: ");
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
System.out.println("Enter another number: ");
int b=sc.nextInt();
//ARITHMETIC OPERATORS
System.out.println("a+b = "+(a+b));
System.out.println("a-b = "+(a-b));
//ASSIGNMENT OPERATORS
a+=b; //a=a+b
System.out.println("a+=b: "+a);
//COMPARISON OPERATORS
System.out.println("a==b: "+(a==b));
if(a>b){
    System.out.println("a is greater than b");  
    }
    else if(a<b){
        System.out.println("a is less than b");
    }
    else{
        System.out.println("a is equal to b");
    }
//LOGICAL OPERATORS
if(a>0 && b>0){
    System.out.println("Both numbers are positive");
}
//BITWISE OPERATORS
int c=a&b; //bitwise AND
System.out.println("a&b: "+c);
int d=a^b; //bitwise XOR
System.out.println("a^b: "+d);
    }
}