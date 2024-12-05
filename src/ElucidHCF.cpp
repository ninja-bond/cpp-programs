#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (a%b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    cout << b;
    return 0;
}