#include <iostream>
#include <string>
using namespace std;
void permutation(string str, string ans)
{
    if (str.size() == 0)
    {
        cout << ans << " \n";
        return;
    }
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        string nextstr = str.substr(0, i) + str.substr(i + 1, str.size() - 1 - i);
        permutation(nextstr, ans + ch);
    }
}
int main()
{
    permutation("abcd", "");
    return 0;
}