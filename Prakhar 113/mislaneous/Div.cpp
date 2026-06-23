#include <bits/stdc++.h>
using namespace std;
bool ans(char arr[][100], int n, int m, int x, int y)
{
    char cell = arr[x][y];
    int i = 0, j = 0;
    if ((x > 0 && x < n - 1) && (y > 0 && y < n - 1))
    {
        i = x - 1;
        j = y - 1;
    }
    if (cell)
        ;
    return false
}
int main()
{
    int T;
    while (T > 0)
    {
        int N, M;
        cin >> N >> M;
        char A[N][M];
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> A[i][j];
            }
        }
        int X, Y;
        cin >> X >> Y;
        if (ans(A, N, M, X, Y))
            cout << "yes";
        else
            cout << "no";

        T--;
    }
    return 0;
}