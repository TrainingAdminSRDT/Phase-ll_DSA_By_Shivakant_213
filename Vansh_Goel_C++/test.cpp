#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Lis(vector<int> arr){
    int n = arr.size();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < n+1; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < n+1; j++)
        {
            if (arr[i-1]<=arr[j])
            {
                
            }
            
        }
        
    }
    
}
int main()
{
   
    return 0;
}