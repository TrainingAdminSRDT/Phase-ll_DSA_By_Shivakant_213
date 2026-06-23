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
Node *LCA(Node *root, int n1, int n2)
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLCA = LCA(root->left, n1, n2);
    Node *right LCA = LCA(root->left, n1, n2);
    if (leftLCA != NULL && rightLCA != NULL)
    {
        return root;
    }
    return leftLCA == NULL ? rightLCA : leftLCA;
}
int distance(Node *root, int n)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == n)
    {
        return 0;
    }
    int leftdist = distance(root->left, n);
    if (leftdist != -1)
        return leftdist + 1;
    int rightdist = distance(root->right, n);
    if (rightdist != -1)
        return rightdist + 1;
    return -1;
}
int min_distance(Node *root, int n1, int n2)
{

    Node *lca = LCA(root, n1, n2);
    int dist1 = distance(lca, n1);
    int dist2 = distance(lca, n2);
    return dist1 + dist2;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    cout << min_distance(root, 4, 6);
    return 0;
}