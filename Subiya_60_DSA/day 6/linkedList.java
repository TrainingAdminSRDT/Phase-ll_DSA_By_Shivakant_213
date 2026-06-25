class linkedList{

    public static class Node{
        int data; 
        Node next;

        Node(int data){
            this.data = data;
            this.next = null;
        }
    }

    
    //Insert at beginning
    public static Node insertAtStart(Node head, int val){
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode; 
        return head;
    }

    //Insert at last
    public static Node insertAtLast(Node head, int val){
        Node newNode = new Node(val);
        if(head == null){
            head = newNode;
            return;
        }
        Node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        
        temp.next = newNode;
        return temp;
    }

    //Insert At Position
    public static void insertatPos(Node head, int val, int pos){
        if (pos == 0) { insertAtHead(val); return; }
        Node temp = head;
        Node newNode = new Node(val);
        for (int i = 0; i < pos - 1 && temp!= null; i++) {
            temp = temp.next;
        }
        newNode.next = temp.next;
        temp.next = newNode;


    }

    //Print LL
    public static void printLL(Node head){
        
        while (head !=null){
        System.out.println(head.data);
        head = head.next;
        }
    }

    public static void main(String[] args) {
        linkedList list = new linkedList();
        Node head = null;
        head = list.insertAtStart(head,5);
        list.insertAtLast(head,7);
        list.printLL(head);
        System.out.println(head);
    }
}