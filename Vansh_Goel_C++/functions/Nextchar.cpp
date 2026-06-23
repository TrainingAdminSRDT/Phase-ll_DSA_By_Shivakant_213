#include <iostream>
using namespace std;
char next(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }

    return ch + 1;
}
int main()
{
    char ch;
    cout << "enter the character :";
    cin >> ch;
    cout << next(ch);
    return 0;
}