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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHT = height(root->left);
    int rightHT = height(root->right);
    int currHT = max(leftHT, rightHT) + 1;
    return currHT;
}
int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftC = count(root->left);
    int rightC = count(root->right);
    int currC = leftC + rightC + 1;
    return currC;
}
int sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftS = sum(root->left);
    int rightS = sum(root->right);
    int currS = leftS + rightS + root->data;
    return currS;
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    cout << sum(root);
    return 0;
}