
import java.util.*;
public class Intro
{
    public static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
             this.data = data;
             this.left = null;
             this.right = null;
        }
    } 

    void levelOrder(Node root){
        if(root == null) return;
         Queue<Node> q = new LinkedList<>();
         q.offer(root);

         while(!q.isEmpty()){
            Node temp = q.poll();
            System.out.println(temp.data + " ");
            
            if(temp.left!= null)
               q.offer(temp.left);
            if(temp.right != null)
              q.offer(temp.right);

         }
        System.out.println("");
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = tree.insert(tree.root, 50);
        tree.root = tree.insert(tree.root, 30);
        tree.root = tree.insert(tree.root, 70);
        tree.root = tree.insert(tree.root, 20);
        tree.root = tree.insert(tree.root, 40);

        tree.levelOrder(tree.root);
    }
    Node root;

}