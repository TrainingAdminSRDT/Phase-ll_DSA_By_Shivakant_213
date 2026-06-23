#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
    ~Node()
    {

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
class List
{
public:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    ~List()
    {

        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
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
        if (head == NULL)
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
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "position invalid " << endl;
                return;
            }

            temp = temp->next;
        }
        // temp is now pointing at previous node of the position
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "linked list is empty";
        }
        cout << head->data << endl;
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        Node *temp = head;
        while (temp->next != tail) // (temp->next->next !=NULL)when tail is not given;
        {
            temp = temp->next;
        }
        cout << tail->data << endl;

        tail = temp;

        delete temp;
    }
    void searchItr(int key)
    {
        if (head == NULL)
        {
            cout << "LL is already empty \n";
            return;
        }

        Node *temp = head;
        int i = 0;
        while (temp->next != NULL)
        {

            if (temp->data == key)
            {
                cout << "key is found at: " << i << endl;
                return;
            }
            temp = temp->next;
            i++;
        }
        cout << "key not found in the LL" << endl;
    }
    int helper(Node *head, int key)
    {
        if (head == NULL)
        {
            return -1;
        }

        if (head->data == key)
        {
            return 0;
        }
        int idx = helper(head->next, key);
        if (idx == -1)
        {
            return -1;
        }
        return idx + 1;
    }
    int searchRec(int key)
    {
        return helper(head, key);
    }
    void reverse()
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    int getSize()
    {
        Node *temp = head;
        int c = 0;
        while (temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        return c;
    }
    void removeNth(int n)
    {
        int size = getSize();
        Node *prev = head;
        for (int i = 1; i < size - n; ++i)
        {
            prev = prev->next;
        }

        Node *toDel = prev->next;
        cout << "Going to delete: " << toDel->data << endl;

        prev->next = toDel->next;
    }
    void checkloop()
    {
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL and fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                cout << "it is loop";
                return;
            }
        }
        cout << "not a loop";
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

    return 0;
}