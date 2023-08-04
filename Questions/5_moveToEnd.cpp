#include <bits/stdc++.h>
using namespace std;

string moveToEnd(string s)
{
    if(s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveToEnd(s.substr(1));

    if(ch == 'x')
        return ans+ch;
    else    
        return ch+ans;

}
int main()
{

    cout << moveToEnd("axxbdxcefxhix") << endl;

    return 0;
}