#include <bits/stdc++.h>
using namespace std;

int sumOfRowCol(int N, int M, vector<vector<int>> A)
{
    vector<int> sum_rows;
    int min_ind = min(N, M);
    vector<int> sum_cols;
    for (int row = 0; row < min_ind; row++)
    {
        int tmp_sum_row = 0;
        for (int col = 0; col < M; col++)
            tmp_sum_row += A[row][col];
        sum_rows.push_back(tmp_sum_row);
    }
    for (int col = 0; col < min_ind; col++)
    {
        int tmp_sum_col = 0;
        for (int row = 0; row < N; row++)
            tmp_sum_col += A[row][col];
        sum_cols.push_back(tmp_sum_col);
    }

    cout << "sum of rows: \n";
    for (auto val : sum_rows)
        cout << val << " ";
    cout << endl;
    cout << "sum of cols: \n";
    for (auto val : sum_cols)
        cout << val << " ";
    cout << endl;

    for (int i = 0; i < min_ind; i++)
        if (sum_cols[i] != sum_rows[i])
            return 0;
    return 1;
}

int main()
{
    int n = 4, m = 3;
    vector<vector<int>> A = {{-3, 3, 2}, {1, 5, 6}, {7, 1, 0}, {3, 2, 1}};
    vector<vector<int>> a(n, vector<int>(m));
    cout << sumOfRowCol(n, m, A) << endl;
}