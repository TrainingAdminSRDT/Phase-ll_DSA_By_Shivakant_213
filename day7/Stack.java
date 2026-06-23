package day7;
public class Stack {
    static int[] stack = new int[5];
    static int top = -1;

    static void push(int data) {
        if (top == 4) {
            System.out.println("Stack Overflow");
            return;
        }
        stack[++top] = data;
    }

    static void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return;
        }
        System.out.println("Deleted: " + stack[top--]);
    }

    static void peek() {
        if (top == -1) {
            System.out.println("Stack is Empty");
            return;
        }
        System.out.println("Top Element: " + stack[top]);
    }

    static void display() {
        for (int i = top; i >= 0; i--) {
            System.out.print(stack[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        push(10);
        push(20);
        push(30);

        System.out.print("Stack: ");
        display();

        peek();

        pop();

        System.out.print("After Pop: ");
        display();
    }
}
