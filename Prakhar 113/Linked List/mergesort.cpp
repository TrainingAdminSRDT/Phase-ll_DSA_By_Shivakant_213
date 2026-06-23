#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class List
{
public:
    Node *head;
    Node *tail;

    List() : head(nullptr), tail(nullptr) {}

    ~List()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printlist(Node *head)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    Node *split(Node *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return nullptr;
        }

        Node *slow = head;
        Node *fast = head;
        Node *prev = nullptr;

        while (fast != nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if (prev != nullptr)
        {
            prev->next = nullptr;
        }

        return slow;
    }

    Node *merging(Node *left, Node *right)
    {
        Node dummy(0);
        Node *tail = &dummy;

        while (left != nullptr && right != nullptr)
        {
            if (left->data <= right->data)
            {
                tail->next = left;
                left = left->next;
            }
            else
            {
                tail->next = right;
                right = right->next;
            }
            tail = tail->next;
        }

        if (left != nullptr)
        {
            tail->next = left;
        }
        else
        {
            tail->next = right;
        }

        return dummy.next;
    }

    Node *mergesort(Node *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        Node *rightHead = split(head);
        Node *left = mergesort(head);
        Node *right = mergesort(rightHead);

        return merging(left, right);
    }
};

int main()
{
    List ll;

    ll.push_back(1);
    ll.push_back(-2);
    ll.push_back(1);
    ll.push_back(9);
    ll.push_back(3);
    ll.printlist(ll.head);
    ll.head = ll.mergesort(ll.head);
    ll.printlist(ll.head);

    return 0;
}