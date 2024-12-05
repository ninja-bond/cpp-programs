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
    int n,r;
    cin >> n >> r;
    int result = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<result;
}