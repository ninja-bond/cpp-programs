#include<iostream>
#include<vector>
using namespace std;


bool mycompare(pair<int, int> p1, pair<int , int > p2){
    return p1.first<p2.first;
}


int main()
{
    int a[]= {};
    vector <pair<int , int>> v;


    for(int i = 0 ;i < (sizeof(a)/sizeof(a[0])), i++){
        // pair <int, int > p;
        // p.first =arr[i];
        // p.second=i;
        v.push_back(make_pair(a[i],i));
    }

    sort(v.begin(), v.end(), mycompare);
    for(int i= 0 ; i < v.size(), i++){
        
    }
    return 0;
}
