#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m ;
    int a[n][m];

    for (int i = 0 ; i <= n-1 ; i++){
        for (int j = 0 ; j <= m-1 ; j++){
            cin >> a[i][j];
        }
    }


    int row_st=0, row_end = n-1, col_st = 0, col_end = m-1;

    while(col_st <= col_end && row_st <= row_end){

        //for row start 
        for (int i = col_st ; i <= col_end ; i++){
            cout << a[row_st][i] << " ";
        }
        row_st++;

        //for col end
        for (int i = row_st ; i <= row_end ; i++)
        {
            cout << a[i][col_end] << " ";
        }
        col_end--;

        //for row end
        for (int i = col_end; i >= col_st ; i--)
        {
            cout << a[row_end][i] << " ";
        }
        row_end--;

        //for col start
        for (int i = row_end; i >= row_st; i--)
        {
            cout << a[i][col_st] << " ";
        }
        col_st++;
    }
    return 0;
}