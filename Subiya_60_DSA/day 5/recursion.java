
import java.util.Scanner;
class recursion{

    // Factorial
    // static int factorial(int n){
    //     int fact =1;
    //      if(n==0 || n==1)
    //       return 1;
    //        return n * factorial(n-1);
    // }      //O(1)

    //Fibonacci
   // static int fibonacci(int n){
        // if(n<=1) return n;
        
        // return fibonacci(n-1) +  fibonacci(n-2);
        // O(2^n)(double recursion call)
         
    //}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n");
        int n = sc.nextInt();
        //System.out.println(factorial(n));
        System.out.println(fibonacci(n));
    }
}