#include<iostream>
using namespace std;

void subst(string s , string ans){
    if(s.length() == 0)
    {
        cout << ans << endl;
        return ;
    }   

    char ch = s[0];
    string ros = s.substr(1);

    subst(ros , ans);
    subst(ros, ans + ch);

}

int main()
{
    string s ;
    cin >> s;
    subst(s,"");
    return 0;
}