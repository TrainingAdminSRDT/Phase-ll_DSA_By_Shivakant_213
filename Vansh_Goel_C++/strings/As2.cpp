#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int i = 0;
    int count = 0;
    for (char ch : str1)
    {
        if (ch != str2.at(i++))
        {
            count++;
        }
    }
    if (count == 2)
        cout << "yes";
    else
        cout << "no";
    return 0;
}