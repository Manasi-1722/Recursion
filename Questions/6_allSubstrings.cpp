#include <bits/stdc++.h>
using namespace std;

void subString(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string rest = s.substr(1);

    subString(rest, ans);
    subString(rest, ans+ch);
}
int main()
{
    subString("ABC", "");
    cout << endl;
    return 0;
}