//Asur Approach 👻👻

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin >> a[i];
    }

    for(int i = 0 ;i <= n-1 ;i++)
    {
        for (int j = i; j <= n-1; j++)
        {
            for(int k = i ; k<= j ;k++){
                cout << a[k] << " ";
            }
            cout << endl;
        }
        
    }
    
    return 0;
}