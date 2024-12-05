#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, ld;
    cin>>n;
    int temp=n;
    int sum=0;

    while(n!=0){
        ld=n%10;
        sum= sum + pow(ld,3);
        n=n/10;
    }
    if(sum == temp ){
        cout<<"Armstrong Number!";
    }else{
        cout<<"Not a Armstrong Number!";
    }
}