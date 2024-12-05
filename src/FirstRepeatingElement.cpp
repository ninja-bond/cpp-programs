//Given an array arr] of size N. The task is to find the first repeating element in the array of integers, 
//i.e., an element that occurs more than once and whose index of first occurrence is smallest.

#include<iostream>
using namespace std ; 

int main (){
    int n ;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e6+2;
    int idx[N];

    for (int  i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int min_idx = INT_MAX;




    for (int i = 0; i < n ; i++)
    {
        /* code */
        if (idx[a[i]] != -1){
            min_idx = min(min_idx, idx[a[i]]);
        }
        else
        {
            /* code */
            idx[a[i]] = i;
        }
        
    }

    if (min_idx == INT_MAX){
        cout << "-1";
    }
    else{
        cout << min_idx;
    } 
}