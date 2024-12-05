#include<iostream>
using namespace std;

void revStr(string s){
    if(s == ""){
        return;
    }
    revStr(s.substr(1));
    cout << s[0] << "";
}

int main()
{
    string s ;
    cin >> s;

    revStr(s);
    return 0;
}