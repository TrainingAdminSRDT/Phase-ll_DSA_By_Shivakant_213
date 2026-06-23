#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string str, string ans, vector<int> &map)
{
    if (str.length() == 0)
    {
        return ans;
    }
    if (map[str[0] - 'a'] >= 1)
    {
        map[str[0] - 'a']++;
        return removeDuplicates(str.substr(1), ans, map);
    }
    else
    {
        map[str[0] - 'a']++;
        return removeDuplicates(str.substr(1), ans + str[0], map);
    }
}
void Print_binary_strings_without_consecutive_ones(int n, char last_char, string current_string)
{
   if(n==0){
       cout << current_string << endl;
       return;
   }
   if(last_char!='1'){
       Print_binary_strings_without_consecutive_ones(n - 1, '1', current_string + '1');
       Print_binary_strings_without_consecutive_ones(n - 1, '0', current_string + '0');
   }
   else{
    Print_binary_strings_without_consecutive_ones(n - 1, '0', current_string + '0');
   }
}
int main()
{
    vector<int> map(26, 0);
    // string str = "appnnacollege";
    // cout << removeDuplicates(str, "", map);
    Print_binary_strings_without_consecutive_ones(3, '0', "");
    return 0;
}