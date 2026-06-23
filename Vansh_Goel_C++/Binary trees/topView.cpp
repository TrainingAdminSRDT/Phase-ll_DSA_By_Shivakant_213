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
void topView(Node *root)
{
    queue<pair<Node *, int>> Q; // queue for level order traversal
    map<int, int> m;            // map for (Horizontal distance,node data)
    Q.push(make_pair(root, 0));
    while (!Q.empty())
    {
        pair<Node *, int> curr = Q.front();
        Q.pop();
        Node *currNode = curr.first;
        int HD = curr.second;
        if (m.count(HD) == 0)
        {
            m[HD] = currNode->data;
        }
        if (currNode->left != NULL)
        {
            pair<Node *, int> left = make_pair(currNode->left, HD - 1);
            Q.push(left);
        }
        if (currNode->right != NULL)
        {
            pair<Node *, int> right = make_pair(currNode->right, HD + 1);
            Q.push(right);
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    topView(root);
    return 0;
}