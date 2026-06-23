public class Queue{
    static int[] queue = new int[5];
    static int front = -1, rear = -1;

    static void enqueue(int data) {
        if (rear == 4) {
            System.out.println("Queue Overflow");
            return;
        }

        if (front == -1)
            front = 0;

        queue[++rear] = data;
    }

    static void dequeue() {
        if (front == -1 || front > rear) {
            System.out.println("Queue Underflow");
            return;
        }

        System.out.println("Deleted: " + queue[front]);
        front++;
    }

    static void display() {
        for (int i = front; i <= rear; i++) {
            System.out.print(queue[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        enqueue(10);
        enqueue(20);
        enqueue(30);

        System.out.print("Queue: ");
        display();

        dequeue();

        System.out.print("After Deletion: ");
        display();
    }
}
