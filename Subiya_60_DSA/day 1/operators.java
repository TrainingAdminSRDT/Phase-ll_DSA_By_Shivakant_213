import java.util.*;
class operators{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a,b,c;
        System.out.println("Enter the value");
        a = sc.nextInt();
        b = sc.nextInt();      // Assignment operator
        c = a+b;             // Arithmatic operator
        if(a>b)                  // Comparison operator
           System.out.println("True");
        else
           System.out.println("False");
        
        if(a == 2 && b == 8)          //Logical operator
           System.out.println("2 and 8");
        System.out.println(a^b);
    }
}