#include<iostream>
using namespace std;


void checkPrime(int n1){
    int flag = 0;
    for(int i = 2; i <= sqrt(n1); i++){
        if(n1 % i == 0 ){
            flag=1;
            break;
        }
    }
    if (flag == 0 ){
        cout<<n1<<endl;
    }
    return;
}


int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int min1= min(a,b);
    int max1= max(a,b);

    for(int i = min1; i<= max1; i++){
        checkPrime(i);
    }
    return 0;
}


