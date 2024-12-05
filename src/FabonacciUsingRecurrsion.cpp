#include<iostream>
using namespace std;


//finding nth term of fabonacci
int fab(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fab(n-1) + fab(n-2);
}


int main()
{
    int n ;
    cin >> n;

    cout << fab(n);
    return 0;
}