#include<iostream>
using namespace std;

void fabonicciSequence( int n){
    int a=0,b=1,c=a+b;

cout<<a<<" ";
cout<<b<<" ";

if(n >= 3){
for(int i =3;i<=n;i++){
cout<<c<<" ";
a = b;
b = c;
c = a + b;
}}}


int main()
{
    int n ;
    cin>>n;
    fabonicciSequence(n);
    return 0;
}
