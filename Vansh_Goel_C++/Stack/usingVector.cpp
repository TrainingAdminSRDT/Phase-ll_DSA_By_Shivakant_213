#include <bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }
    int top()
    {
        int top = vec.size() - 1;
        return top;
    }
    void print()
    {
        for (auto itr : vec)
        {
            cout << itr << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.print();
    s.pop();
    s.print();
    return 0;
}