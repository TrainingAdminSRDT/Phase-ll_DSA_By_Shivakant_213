public class Fact{
    int factorial(int n){
        int ans =0;
        for(int i=1;i<=n;i++){
            ans = ans *i;
        }
    }
    public static void main(String[]args){
        int n=10;
        if(n<0){
            System.out.println("Please enter a valid number");
        }
        if(n==0|| n==1){
            System.out.println("Factorial is :" + n);
        }
        System.out.println(factorial(n));
        
    }
}