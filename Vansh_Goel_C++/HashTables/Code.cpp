#include <bits/stdc++.h>
using namespace std;

// Node class to store key-value pairs
class Node
{
public:
    string key;
    int val;
    Node *next;

    // Constructor to initialize key and value
    Node(string key, int val)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }
    // Destructor to delete the node
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

// HashTable class to store key-value pairs
class HashTable
{
    Node **table;
    int currsize;
    int totsize;

    // Hash function to calculate the index
    int hashfunction(string key)
    {
        int idx = 0;

        for (int i = key.length() - 1; i >= 0; i--)
        {
            idx = idx + (key[i] * key[i]) % totsize;
        }
        idx = idx % totsize;
        return idx;
    }
    // Rehashing function to double the size of the table
    void rehash() // O(n)
    {
        Node **oldTable = table;
        int oldSize = totsize;
        currsize = 0;
        totsize = 2 * totsize;
        table = new Node *[totsize];

        for (int i = 0; i < totsize; i++)
        {
            table[i] = NULL;
        }

        // Copy old values
        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }

            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

public:
    // Constructor to initialize the table size
    HashTable(int size = 5)
    {
        totsize = size;
        currsize = 0;
        table = new Node *[totsize];
        for (int i = 0; i < totsize; i++)
        {
            table[i] = NULL;
        }
    }
    // Function to insert a key-value pair
    void insert(string key, int val)
    {
        int idx = hashfunction(key);
        Node *newNode = new Node(key, val);
        newNode->next = table[idx];
        table[idx] = newNode;
        currsize++;
        double lamda = currsize / (double)totsize;
        if (lamda > 1)
        {
            rehash();
        }
    }
    // Function to check if a key exists
    bool exists(string key)
    {
        int idx = hashfunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Function to search for a key-value pair
    int search(string key)
    {
        int idx = hashfunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }
    // Function to print the contents of the hash table
    void print()
    {
        for (int i = 0; i < totsize; i++)
        {
            Node *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << " " << temp->val << "->";
                temp = temp->next;
            }
            if (table[i] != NULL)
            {
                cout << "NULL" << endl;
            }
        }
    }
    // Function to remove a key-value pair
    void remove(string key)
    {
        int idx = hashfunction(key);
        Node *temp = table[idx];
        Node *prev = temp;
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                if (prev == temp)
                {
                    table[idx] = temp->next;
                }
                else
                {
                    prev->next = temp->next;
                }
                temp->next = NULL;
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
};

int main()
{
    HashTable ht;
    ht.insert("india", 150);
    ht.insert("china", 150);
    ht.insert("pakistan", 0);
    ht.insert("nepal", 10);
    ht.insert("us", 15);
    ht.insert("uk", 20);
    cout << "Before removing -------------------------" << endl;
    ht.print();
    cout << "After removing --------------------------" << endl;
    ht.remove("pakistan");
    ht.print();

    // cout << "Search for india: " << ht.search("india") << endl;
    return 0;
}
