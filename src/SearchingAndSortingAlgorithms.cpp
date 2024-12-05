#include<iostream>
using namespace std ;


// O(n^2)
void SelectionSort(int a[], int n ){
    for(int i = 0 ; i <= n-2; i++){
        for (int j=i+1; j<=n-1; j++ ){
            if(a[j]<a[i]){
                int temp = a[j];
                a[j]=a[i];
                a[i]= temp;
            }
        }
    }

    for (int i =0 ; i <= n-1 ; i++){
        cout<<a[i]<<" ";
    }
}



// O(n^2)
void InsertionSort(int a[], int n ){
    for(int i = 1 ; i <= n-1 ; i++){
        int current = a[i];
        int j=i-1;
        while (a[j]>current && j>=0 ){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current ;
    }

    for (int i =0 ; i <= n-1 ; i++){
        cout<<a[i]<<" ";
    }
}




// O(n^2)
void BubbleSort(int a[], int n ){
    int counter = 1;
    while( counter <= n-1 ){
        for (int i = 0 ; i <= n-counter-1 ; i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]= a[i+1];
                a[i+1]= temp;
            }
            
        }counter++;
    }

    // for(int i = 0 ; i <= n-2; i++){
    //     for (int j=0; j<=n-i-1; j++ ){
    //         if(a[j]<a[j+1]){
    //             int temp = a[j];
    //             a[j]=a[j+1];
    //             a[j+1]= temp;
    //         }
    //     }
    // }

    for (int i =0 ; i <= n-1 ; i++){
        cout<<a[i]<<" ";
    }
}



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

    // int key; 
    // cin >> key ;

    // cout<<linearSearch(a , n,  key); 
    // cout<<binarySearch(a , n,  key);

    // SelectionSort(a , n);
    // BubbleSort(a , n);
    InsertionSort(a , n);
}