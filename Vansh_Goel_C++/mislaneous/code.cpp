#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    int count = 0;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != str2[i])
        {
            count++;
        }
    }
    if (count % 2 == 0)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}