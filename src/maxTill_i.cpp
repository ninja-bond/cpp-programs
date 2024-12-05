#include<iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i <= n-1 ; i++){
        cin >> a[i];
    }

    int max1 = INT_MIN;

    for (int i = 0 ; i <= n-1 ; i++){
        max1 = max(max1 , a[i]);
        cout << max1 << " ";
    }
}