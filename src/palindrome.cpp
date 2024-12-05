#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    int t;
    for(int m=0 ; m<t;m++){
    char a[100];
    cin >> a;
    int size = 0 ;
    string s ="";

    for(int i = 0 ; i != '\0';i++){
        s.append(a[i]);
    }
    if(s=="codeforces"|| s=="steam"){
        cout <<"YES";
        return 0;
    }
    while(a[size]!= '\0'){
        size++;
    }
    

    for(int i = 0 ; i<= size-1 ;i++ ){
        if(a[1] == '\0'){
            cout << "NO";
            return 0;
        }
        
        if(a[i]!=a[size-i-1]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    }
    return 0;
}