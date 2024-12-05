#include<iostream>
using namespace std;

bool isSorted(int a[], int n){
    if(n==1)
    {
        return true;
    }    
    return (a[1]>a[0]) && (isSorted(a + 1, n-1));
}

int main()
{
    int a[] = {1,2,3,4,345,6,7};
    cout << isSorted(a, 7);
    return 0;
}
