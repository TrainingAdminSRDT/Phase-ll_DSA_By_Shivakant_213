#include <bits/stdc++.h>
using namespace std;
bool palindrome(vector<int> arr, int n)
{
    stack<int> st;

    for (auto x : arr)
    {
        st.push(x);
    }
    for (auto x : arr)
    {
        if (st.top() != x)
        {
            return false;
        }
        st.pop();
    }
    return true;
}
int main()
{
    vector<int> arr = {1, 2, 2, 1};
    int n = 4;
    char ch = '4';
    cout << isdigit(ch);
    cout << palindrome(arr, n);
    return 0;
}