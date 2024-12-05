#include<iostream>
using namespace std;


void primeFactor(int n)
{
    int spf[100] = {0};
    for(int i = 2 ; i <= n ; i++){
        spf[i] = i; 
        // cout << "hi" << endl;
    }

    for (int i = 2; i <= n ; i++)
    {
        if (spf[i] == i){
            for (int j = i*i; j <= n ; j+=i)
            {
                if(spf[j] == j){
                    spf[j] = i ;
                }
            }
            
        }
    }
    while(n!=1){
        cout << spf[n] << " ";
        n = n / spf[n];
    }

}   


int main()
{
    cout << "hi" << endl;
    int n ;
    cin >> n ;
    cout << "hi" << endl;
    primeFactor(n);
    return 0;
}