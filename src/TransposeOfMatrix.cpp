#include<iostream>
using namespace std;

// void swap (int a, int b){
//     int temp = a;
//     a = b;
//     b = temp ;
// }

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0 ; i <= n-1 ; i++){
        for (int j = 0 ; j <= n-1 ; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0 ; i <= n-2 ; i++){
        for (int j = i+1 ; j <= n-1 ; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp ;
        }
    }

    for (int i = 0 ; i <= n-1 ; i++){
        for (int j = 0 ; j <= n-1 ; j++){
            cout << a[i][j] << " ";
        }cout << endl;
    }
    return 0;
}