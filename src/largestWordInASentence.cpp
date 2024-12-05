#include<iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    char a[n+1];

    cin.getline(a, n);
    cin.ignore(); 

    int i = 0 ;
    int currlen = 0 , maxlen = 0;
    int maxidx = 0, st = 0;

    while(1){
        if (a[i]==' ' || a[i]=='\0'){
            if (maxlen < currlen)
            {
                maxlen = currlen;
                maxidx = i;
            }
            currlen=0;
        }else
        currlen++;
        
        if(a[i]=='\0'){
            break;
        }
        i++;
        
    }
    cout << "Max length is : ";
    cout << maxlen << endl;
    cout << "Word is : ";
    for (int i = maxidx - maxlen ; i < maxidx ; i++){
        cout << a[i];
    }


    return 0;
}