// int one second 10^8 opreations can be done

// Problem:
// Given an unsorted array A of size N of non-negative integers, find a continuous subarray which 
// adds to a given number S.
// Constraints:
// 1 <= N <= 105
// O <= Ai <= 1010


#include<iostream>
using namespace std;

int main()
{
    int n, sum, sum1 = 0 ;
    cin >> n >> sum;

    int a[n];
    for(int i = 0 ;i <= n-1 ; i++){
        cin >> a[i];
    }

int st = 0, end= 0 ;

while ( end<n && sum1+a[end]<=sum ){
    sum1 += a[end];
    end++; 
}
if (sum == sum1){
    cout << st << " " << end-1;
    return 0 ;
}


while(end<n){
    sum1 += a[end];

    while(sum1>sum && st<=end){
        sum1 -= a[st];
        st++;
    }

    if(sum1 == sum){
        cout << st <<" "<< end <<endl;
        return 0 ;
    }else{
        end++;
    }
}

cout << "-1";


    return 0;
}