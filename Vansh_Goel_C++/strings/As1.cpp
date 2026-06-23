#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int l = str.length();
    int c = 0;
    for (char ch : str)
    {
        if (ch <= 'z' && ch >= 'a')
        {
            c++;
        }
    }
    cout << "count =" << c;
    return 0;
}