#include <bits/stdc++.h>
using namespace std;
bool duplicate(string str)
{
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ')')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.top() == '(')
            {
                return true;
            }
            while (st.top() != '(')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main()
{
    string str;
    getline(cin, str);
    cout << duplicate(str);
    return 0;
}