#include<iostream>
using namespace std;

int numberOfOnes(int n){
    int counter = 0;
    while (n!=0){
        n = n & (n-1);
        counter++;
    }
    return counter;
}

int main()
{
    int n ;
    cin >> n;
    cout << numberOfOnes(n);
    return 0;
}