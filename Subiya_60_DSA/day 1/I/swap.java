import java.util.*;
class swap{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a,b, rev = 0, rem=0;
        System.out.println("Enter value of a and b");
        a = sc.nextInt();
        b = sc.nextInt();
        // a = a+b;
        // b = a-b;
        // a = a-b;
        // System.out.println("a = " + a );
        // System.out.println("b = " + b);
        // System.out.println("sum = " + (a+b) );

        if(a%2 == 0)
            System.out.println("Even");
        if(a%2 != 0)
            System.out.println("Odd");
        int n =a;
        for (int i = 0; i < 10; i++) {
            rem = a%10;
            rev = rev*10+rem;
            a= a/10;
        }
        if(a==rev)
        System.out.println("Palindrome");
        }

        //func();
    }
    // static void func(){
    //         int c = 0;
    //      System.out.println(c);
    //     }
}