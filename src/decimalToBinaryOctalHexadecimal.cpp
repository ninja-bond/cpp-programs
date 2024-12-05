#include<iostream>

using namespace std;

void decimalToBinary( int n ) {
    int ans = 0;
    int x = 1;
    while(x<=n){
        x*=2;
    }x/=2;
    
    while (x>0){
        int ld=n/x;
        n=n-ld*x;
        x/=2;
        ans = ans*10 + ld;
    }
    // cout<<ans;
    
}


void decimalToOctal( int n ) {
    int ans = 0;
    int x = 1;
    while(x<=n){
        x*=8;
    }x/=8;
    
    while (x>0){
        int ld=n/x;
        n=n-ld*x;
        x/=8;
        ans = ans*10 + ld;
    }
    // cout<<ans;
    
}

void decimalToHexadecimal( int n ) {
    string ans = "";
    int x = 1;
    while(x<=n){
        x*=16;
    }x/=16;
    
    while (x>0){
        int ld=n/x;
        n=n-ld*x;
        x/=16;

        if(ld<=9){
            ans = ans + to_string(ld);
        }
        else if(ld>='A' && ld<='F'){
            char c= 'A' + ld - 10;
            ans.push_back(c);
        }
    }
    cout<<ans;
    
}


int main()
{
    int n ;
    cin>>n;
    decimalToHexadecimal(n);
    return 0;
}