#include<iostream>
using namespace std;

int firstocc(int a[], int n , int key, int i){

    if(i==n){
        return -1;
    }

    if(a[i] == key){
        return i;
    }
    return firstocc(a, n , key,i+1) ;
}


int lastocc(int a[], int n , int key, int i){
    
    if(i==n){
        return -1;
    }

    int restArr = lastocc(a, n , key, i+1);
    if (restArr !=-1){
        return restArr ; 
    } 

    if(a[i] == key){
        return i;
    }

    return -1;
    
}

int main()
{
    int a[]= {23,424,22,535,75,53521,35,535,343,346};
    cout << lastocc(a,10,535,0);
    return 0;
}