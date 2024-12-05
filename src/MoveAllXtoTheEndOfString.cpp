#include<iostream>
using namespace std;

string moveX(string s){

    if(s.length() == 0){
        return "";
    }

    string ans = moveX(s.substr(1));
    char ch = s[0];
    if(ch == 'x'){
        return ans +ch;
    }else{
        return ch+ans;
    }
}



int main()
{
    string s;
    // cout << s.substr(0,1);
    cin >> s;
    cout << moveX(s);
    return 0;
}