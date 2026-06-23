package day6;

class Node{
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList{
    Node head;

    void addFirst(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }

    void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
        public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list.addFirst(30);
        list.addFirst(20);
        list.addFirst(10);

        list.display();

    }
}


