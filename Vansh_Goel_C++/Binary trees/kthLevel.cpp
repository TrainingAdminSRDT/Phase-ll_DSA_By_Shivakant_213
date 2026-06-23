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
void kthHelper(Node *root, int k, int currlevel) // O(n)
{
    if (root == NULL)
    {
        return;
    }
    if (currlevel == k)
    {
        cout << root->data;
        return;
    }
    kthHelper(root->left, k, currlevel + 1);
    kthHelper(root->right, k, currlevel + 1);
}
void kthLevel(Node *root, int k)
{
    kthHelper(root, k, 1);
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    kthLevel(root, 3);
    return 0;
}