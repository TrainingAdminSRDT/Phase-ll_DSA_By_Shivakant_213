#include <bits/stdc++.h>
using namespace std;
void printboard(vector<vector<char>> board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
    cout << "-----------------------------\n";
}
bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // horizontal safety
    for (int i = 0; i < n; i++)
    {
        if (board[row][i] == 'Q')
            return false;
    }
    // vertical safety
    for (int i = 0; i < n; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }
    // left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    // right diagonal safety
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}
void nQueens(vector<vector<char>> board, int row)
{
    if (row == board.size())
    {
        printboard(board);
        return;
    }
    for (int i = 0; i < board.size(); i++)
    {
        if (isSafe(board, row, i))
        {
            board[row][i] = 'Q';
            nQueens(board, row + 1);
            board[row][i] = '.';
        }
    }
}
int main()
{
    vector<vector<char>> board;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> row;
        for (int j = 0; j < n; j++)
        {
            row.push_back('.');
        }
        board.push_back(row);
    }
    nQueens(board, 0);

    return 0;
}