//there are three types of approaches 1. God's Approach , 2. Human's Approach, and 3. Asur Approach 

//This one is Bhagwan Approach🥰
#include<iostream>
using namespace std;

int main()
{
    int n, m, target;
    cin >> n >> m ;
    int a[n][m];
    cin >> target;

    for (int i = 0 ; i <= n-1 ; i++){
        for (int j = 0 ; j <= m-1 ; j++){
            cin >> a[i][j];
        }
    }

    int r = 0 , c = m-1;
    bool found = false;
    while (r < n && c >= 0)
    {
        if( a[r][c] == target ){
            found = true; 
            break;
        }
        else if( a[r][c] > target ){
            c--; 
        }
        else{
            r++; 
        }
    }
    if(found){
        cout << "found";
    }
    else{
        cout << "not found";
    }
    return 0;
}