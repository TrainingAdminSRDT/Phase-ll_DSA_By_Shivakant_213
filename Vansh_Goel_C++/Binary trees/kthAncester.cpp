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
int kthancestor(Node *root, int node, int k)
{
    if (root == NULL)
        return -1;
    if (root->data == node)
        return 0;
    int leftsubtree = kthancestor(root->left, node, k);
    int rightsubtree = kthancestor(root->right, node, k);
    if (leftsubtree == -1 && rightsubtree == -1)
        return -1;

    int validval = leftsubtree == -1 ? rightsubtree : leftsubtree;
    if (validval + 1 == k)
    {
        cout << "kthancestor:  " << root->data << endl;
    }
    return validval + 1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    int node = 4, k = 2;
    kthancestor(root, 4, 2);

    return 0;
}