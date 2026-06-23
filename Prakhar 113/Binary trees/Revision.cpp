#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

public:
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
static int idx = -1;
Node *buildtree(int node[])
{
    idx++;
    if (node[idx] == -1)
        return NULL;
    Node *currnode = new Node(node[idx]);
    currnode->left = buildtree(node);
    currnode->right = buildtree(node);
    return currnode;
}
void preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelorder(Node *root)
{
    queue<Node *> Q;
    Q.push(root);
    Q.push(nullptr);
    while (!Q.empty())
    {
        Node *curr = Q.front();
        Q.pop();
        if (curr != nullptr)
        {
            cout << curr->data << " ";
        }

        if (curr->left != NULL)
            Q.push(curr->left);
        if (curr->right != NULL)
            Q.push(curr->right);
        if (Q.front() == NULL)
        {
            cout << endl;
            Q.pop();
            Q.push(nullptr);
        }
    }
}
int height(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftH = height(root->left);
    int rightH = height(root->right);
    return max(leftH, rightH) + 1;
}
int countOfNodes(Node *root)
{
    if (root == nullptr)
        return 0;
    int leftC = countOfNodes(root->left);
    int rightC = countOfNodes(root->right);
    return leftC + rightC + 1;
}
int sumOfNodes(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    int leftS = sumOfNodes(root->left);
    int rightS = sumOfNodes(root->right);
    return leftS + rightS + root->data;
}
int diam(Node *root) // O(n^2)
{
    if (root == nullptr)
    {
        return 0;
    }
    int currDiam = height(root->left) + height(root->right) + 1;
    int leftDiam = diam(root->left);
    int rightDiam = diam(root->right);
    return max(currDiam, max(leftDiam, rightDiam));
}
pair<int, int> diam2(Node *root) // O(n)
{
    if (root == NULL)
        return make_pair(0, 0);
    pair<int, int> left = diam2(root->left);
    pair<int, int> right = diam2(root->right);
    return make_pair(max(left.second + right.second + 1, max(left.first, right.first)), max(left.second, right.second) + 1);
}
// Identical subtree Or Not
bool isIdentical(Node *root1, Node *root2)
{
    if (root1 == NULL and root2 == NULL)
        return true;
    else if (root1 == NULL or root2 == NULL)
        return false;
    if (root1->data != root2->data)
        return false;

    return isIdentical(root1->left, root2->left) and isIdentical(root1->right, root2->right);
}
bool isSubtree(Node *root, Node *subroot)
{
    if (root == NULL and subroot == NULL)
        return true;
    else if (root == NULL or subroot == NULL)
        return false;
    if (root->data == subroot->data)
    {
        bool check = isIdentical(root, subroot);
        if (check)
        {

            return true;
        }
    }
    isSubtree(root->left, subroot);
    isSubtree(root->right, subroot);
    return false;
}
void topView(Node *root)
{
    queue<pair<Node *, int>> Q;
    map<int, int> m;
    Q.push(make_pair(root, 0));
    while (!Q.empty())
    {
        pair<Node *, int> curr = Q.front();
        Q.pop();
        Node *currNode = curr.first;
        int Hd = curr.second;
        if (m.count(Hd) == 0)
        {
            m[Hd] = currNode->data;
        }
        if (currNode->left != NULL)
        {
            pair<Node *, int> left = make_pair(currNode->left, Hd - 1);
            Q.push(left);
        }
        if (currNode->right != NULL)
        {
            pair<Node *, int> right = make_pair(currNode->right, Hd + 1);
            Q.push(right);
        }
    }
    for (auto it : m)
    {
        cout << it.second << " ";
    }
}
Node *LCA(Node *root, int n1, int n2) // revise once again
{
    if (root == NULL)
        return NULL;
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *left = LCA(root->left, n1, n2);
    Node *right = LCA(root->right, n1, n2);
    if (left != NULL && right != NULL)
    {
        return root;
    }
    return left == NULL ? right : left;
}
int dist(Node *root, int n)
{
    if (root == nullptr)
        return -1;
    if (root->data == n)
    {
        return 0;
    }
    int leftD = dist(root->left, n);
    if (leftD != -1)
    {
        return leftD + 1;
    }
    int rightD = dist(root->right, n);
    if (rightD != -1)
    {
        return rightD + 1;
    }
    return -1;
}
int min_dist(Node *root, int n1, int n2)
{
    Node *lca = LCA(root, n1, n2);
    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);
    return dist1 + dist2;
}
int main()
{
    int node[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildtree(node);
    // Node *subroot = root;
    // subroot->left = root->left->left;
    // subroot->right = root->left->right;
    // cout << isSubtree(root, subroot);

    // cout << root->data;
    // preorder(root);
    // levelorder(root);
    // pair<int, int> ans = diam2(root);
    // cout << "Diameter: " << ans.first << "\n";
    // cout << "Height: " << ans.second << "\n";
    // topView(root);
    // Node *ans = LCA(root, 4, 5);
    // cout << ans->data;
    cout << min_dist(root, 4, 6);
    return 0;
}
