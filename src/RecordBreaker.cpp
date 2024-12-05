// Isyana is given the number of visitors at her local theme park on N consecutive days. 
//The number of visitors on the i-th day is V. A day is record breaking if it satisfies both of the following
// conditions:
// • The number of visitors on the day is strictly larger than the number of visitors on each 
//of the previous days.
// Either it is the last day, or the number of visitors on the day is strictly 
//larger than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n ; 
    cin >> n;

    if (n == 1 ){
        cout << "1";
        return 0 ; 
    }
    int a[n];
    for (int i = 0 ; i <= n-1 ; i++){
        cin >> a[i];
    }

    int max1= a[0], i = 0, ans=0;

    while(i < n-1){
        if ((a[i] > a[i+1]) && (a[i] > max1) ){
            ans++;
        }
        max1= max(max1, a[i]);
        i++;
    }

    cout << ans;


    return 0;
}