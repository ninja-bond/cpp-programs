// Problem:
// You are given an array arr[] of N integers including 0. 
//The task is to find the smallest positive number missing from the array.
// Constraints:
// 1 <= N <= 10^6
// -10^6 <= Ai <= 10^6


#include<iostream>
using namespace std;

int main()
{
    int n ; 
    cin >> n ;

    int a[n];
    for(int i = 0 ; i<= n-1 ; i++){
        cin >> a[i];
    }

    const int N = 1e6 +1;
    bool check[N];
    for(int i = 0 ; i<= N-1 ; i++){
        check[i] = false ;
    }

    for (int i = 0; i < n; i++)
    {
        if( a[i]>=0 && check[a[i]]== false ){
            check[a[i]]=true ; 
        }
    }
    for(int i = 0 ; i <= N-1 ; i++){
        if (check[a[i]] == false) {
            cout << i << endl;
            return 0;
        }
    }

    cout << "No Integer Missing";
    return 0;
}