//how many numbers are divisible by 5 or 7 between 1 to 1000
#include<iostream>
using namespace std;

int main()
{
    int a = 5; int b = 7;
    int n = 40;

    int total = n/a + n/b - n/(a*b);
    cout << total << endl;

    return 0;
}