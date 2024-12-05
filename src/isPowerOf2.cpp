#include<iostream>
using namespace std;

int isPowerOf2(int n){
    return n & (n & (n-1));//covering the base case -> if n = 0 then we could not do n-1
}


int main()
{
    int n ;
    cin >> n;
    if(!isPowerOf2(n)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}