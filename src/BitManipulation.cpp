#include<iostream>
using namespace std;
int getBit(int n , int i){
    return (n & (1<<i))!=0;
}


int setBit(int n , int i){
    return (n | (1<<i));
}


int clearBit(int n , int i){
    int mask = ~(1<<i);
    return (n & mask);
}

//update bit = clear bit then set bit
int updateBit(int n , int i, int val){ 
    int mask = ~(1<<i);
    n = n & mask;
    return (n | (val<<i));
}


int main()
{
    int n , i, val;
    cin >> n >> i >> val;

    // cout << getBit(n, i);
    // cout << setBit(n, i);
    // cout << clearBit(n, i);
    cout << updateBit(n, i, val);
}