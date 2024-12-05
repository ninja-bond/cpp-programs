#include<iostream>
using namespace std;

    void keypad(string s , string ans ,string k[]){
        if(s.length() == 0){
            cout << ans << endl;
            return ;
        }

        char ch = s[0];
        string code = k[ch - '0'];
        string ros = s.substr(1);


        for(int i = 0 ; i < code.length() ; i++){
            keypad(ros ,ans + code[i], k);
        }
    }

int main()
{
    // string s ;
    // cin >> s;
    string keypadArr[]={"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    keypad ("23" , "", keypadArr);
    return 0;
}