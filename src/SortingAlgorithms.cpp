#include<iostream>
using namespace std ;


// O(n)
int linearSearch(int a[], int n , int key ){
    for(int i = 0 ;i < n ; i++ ){
        if(key == a[i]){
        return i+1;
    }}
    return -1;
}


// O(log(n)) base2
int binarySearch(int a[], int n , int key ){
    int si=0;
    int ei=n-1;

    while(si<=ei){
        int mid = (si+ei)/2;

        if(key == a[mid] ){
            return mid; 
        }
        else if(key > a[mid] ){
            si= mid + 1;
        }
        else{
            ei= mid - 1 ;
        }
    }return -1;
}
    










int main (){
    int n;
    cin>>n;

    int a[n];
    for(int i =0 ; i< n; i++){
        cin>>a[i];
    }

    int key; 
    cin >> key ;

    // cout<<linearSearch(a , n,  key); 
    // cout<<binarySearch(a , n,  key);
}