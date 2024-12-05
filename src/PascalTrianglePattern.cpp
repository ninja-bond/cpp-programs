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
    int result;
    for(int i = 0 ; i < n ; i++){
        for( int j=0; j<= i; j++){
        result = factorial(i)/(factorial(i-j)*factorial(j));
        cout<<result<<" ";
        }cout<<endl;
    }
}