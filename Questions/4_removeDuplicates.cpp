#include <bits/stdc++.h>
using namespace std;


string removeDupli(string s)
{
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeDupli(s.substr(1));

    if(ch == ans[0])
        return ans;
    else 
        return ch+ans;
}
int main()
{
    cout << removeDupli("aaaabbbeeecdddd") << endl;

    return 0;
}