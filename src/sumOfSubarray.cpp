// SUBARRAY IS CONTINOUS PART OF AN ARRAY
// TOTAL NUMBER OF SUBARRAY POSSIBLE FROM AN ARRAY OF n ELEMENTS IS nC2 + n = n*(n+1)/2

#include<iostream>
using namespace std ; 
int main(){
    int n ;
    cin >> n;
    int a[n];

    for (int i = 0 ; i <= n-1 ; i++){
        cin >> a[i];
    }
    

    int sum = 0 ;
    for (int i=0 ; i<= n-1 ; i++){
        sum =0;
        for (int j=i ; j<= n-1; j++){
            sum += a[j];
            cout << sum << " " ;
        }
    }
}