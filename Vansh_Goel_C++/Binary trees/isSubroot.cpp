#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildTree(vector<int> nodes)
{
    idx++;
    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currnode = new Node(nodes[idx]);
    currnode->left = buildTree(nodes);
    currnode->right = buildTree(nodes);
    return currnode;
}
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
    {
        return true;
    }
    else if (root1 == NULL or root2 == NULL)
    {
        return false;
    }
    if (root1->data != root2->data)
    {
        return false;
    }
    return isIdentical(root1->left, root2->left) and isIdentical(root1->right, root2->right);
}
bool isSubtree(Node *root, Node *subroot)
{
    if (root == NULL and subroot == NULL)
    {
        return true;
    }
    else if (root == NULL || subroot == NULL)
    {
        return false;
    }

    if (root->data == subroot->data)
    {
        // identical condition for subtree
        if (isIdentical(root, subroot))
        {
            return true;
        }
    }
    int isleftsubtree = isSubtree(root->left, subroot);
    if (!isleftsubtree)
    {
        return isSubtree(root->right, subroot);
    }
    return true;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    Node *subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);
    cout << isSubtree(root, subroot);
    return 0;
}