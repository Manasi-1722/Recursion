#include <bits/stdc++.h>
using namespace std;

void subStringAscii(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;  // ascii number of ch
    string rest = s.substr(1);

    subStringAscii(rest, ans);
    subStringAscii(rest, ans+ch);
    subStringAscii(rest, ans + to_string(code));
}

int main()
{
    subStringAscii("AB", "");
    cout << endl;

    return 0;
}