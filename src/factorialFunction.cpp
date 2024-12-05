#include<iostream>
using namespace std;

int factorial(int n){
    int p=1;
    for(int i = 1; i<=n ; i++){
        p=p*i;
    }
    return p;
}


int main(){
    int n ;
    cin >> n;
    int result = factorial(n);
    cout<<result;
}