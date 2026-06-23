#include <bits/stdc++.h>
using namespace std;
void check(string s)
{
    queue<char> ch;
    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
        ch.push(s[i]);
        while (!ch.empty() && freq[ch.front() - 'a'] > 1)
        {
            ch.pop();
        }
        if (ch.empty())
        {
            cout << -1;
        }
        else
        {
            cout << " " << ch.front();
        }
    }
}
int main()
{
    string str = "aabccxb";
    check(str);
    return 0;
}