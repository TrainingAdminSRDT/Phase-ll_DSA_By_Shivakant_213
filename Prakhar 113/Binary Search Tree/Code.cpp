#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        // Constructor to initialize the node with given data
        this->data = data;
        left = right = NULL;
    }
};
Node *insert(Node *root, int val)
{
    // Function to insert a new node with given value in the BST
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }
    // If the value is less than the root, insert in the left subtree
    if (val < root->data)
        root->left = insert(root->left, val);
    // else insert in the right subtree
    else
        root->right = insert(root->right, val);
    return root;
}
Node *builtBST(int arr[], int n)
{
    // Function to build a BST from a given array
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inorder(Node *root)
{
    // Function to print the inorder traversal of the BST
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
bool binarySearch(Node *root, int key)
{
    // Function to search for a given key in the BST
    if (root == NULL)
    {
        return false;
    }
    // If the key is found, return true
    if (root->data == key)
    {
        return true;
    }
    // If the key is less than the root, search in the left subtree
    else if (root->data > key)
    {
        return binarySearch(root->left, key);
    }
    // else search in the right subtree
    else
    {
        return binarySearch(root->right, key);
    }
}

int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = builtBST(arr, 9);
    inorder(root);
    cout << endl;
    // cout << binarySearch(root, 7);

    return 0;
}
