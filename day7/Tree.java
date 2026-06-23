package day7;
import java.util.LinkedList;
import java.util.Queue;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

public class Tree {

    static void bfs(Node root) {
        if (root == null)
        return;
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty()) {
            Node temp = queue.poll();

            System.out.print(temp.data + " ");

            if (temp.left != null)
             queue.add(temp.left);

            if (temp.right != null)
                queue.add(temp.right);
        }
    }

    public static void main(String[] args) {
     Node root = new Node(1);

     root.left = new Node(2);
    root.right = new Node(3);

    root.left.left = new Node(4);
     root.left.right = new Node(5);

        root.right.right = new Node(6);

        System.out.print("BFS Traversal: ");
        bfs(root);
    }
}


