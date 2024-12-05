#include<iostream>
using namespace std;

void subst(string s , string ans){
    if(s.length() == 0)
    {
        cout << ans << endl;
        return ;
    }   

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subst(ros , ans);
    subst(ros, ans + ch);
    subst(ros, ans + to_string(code));

}

int main()
{
    string s ;
    cin >> s;
    subst(s,"");
    return 0;
}