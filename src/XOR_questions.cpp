// 1.Unique1 = program to find a unique number in an array where all numbers except one,are present twice.

//2.Unique2 = Write a program to find 2 unique numbers in an array where all numbers except two, are present twice

//3.Unique3 = Write a program to find a unique number in an array where all numbers except one, are present thrice




#include<iostream>
using namespace std;


int unique1(int a[], int n){
    int xorsum = 0 ;
    for(int i = 0 ; i <= n-1; i++){
        xorsum = xorsum^a[i];
    }
    return xorsum;
}


int setBit (int n , int i){
    return (n & (1<<i))!=0 ;
}

void unique2(int a[], int n){
    int xorsum = 0 ;
    for(int i = 0 ; i <= n-1; i++){
        xorsum = xorsum^a[i];
    }
    int tempxor = xorsum;


    int setbit = 0, pos = 0;
    while (setbit != 1){
        setbit = xorsum & 1;
        pos++;
        xorsum=xorsum >> 1;
    }


    int newxor = 0;
    for(int i = 0 ; i <= n-1 ; i++){
        if(setBit( a[i] , pos-1)){
            newxor = newxor^a[i];
        }
    }


    cout << newxor << " ";
    cout << (newxor^tempxor);

}


bool getBit(int n , int pos){
    return (n & (1<<i))!=0;
}
void unique3(int a[], int n ){
    for(int i = 0 ; i <= 63 ; i++){
        int sum = 0;
        for(int j = 0 ; j <= n-1 ; j++){
            if(getBit(a[j], i)){
                sum++;
            }
        }
    }
    


    }





int main()
{
    int a[] = {1, 2, 4, 2, 3, 1, 3};
    int a2[]= {2,3,3,6,7,23,5,2,23,6};
    // cout << unique1(a, 7);
    // unique2(a2, 10);
    // unique3(a2, 10);
    return 0;
}