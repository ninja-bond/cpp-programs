#include<iostream>
using namespace std;

void binaryToDecimal( int n ) {
    int ans = 0;
    int x = 1;
    while(n!=0){
        ans+=(x*(n%10));
        x*=2;
        n=n/10;
    }
    cout<<ans;
    
}


int main()
{
    int n ;
    cin>>n;
    binaryToDecimal(n);
    return 0;
}