#include <bits/stdc++.h>
using namespace std;

// ****** Replace pi with 3.14 in string *****
// Input - pippxxppiixipi
// Output - 3.14ppxxp3.14ixi3.14

void replacePi(string s)
{
    if(s.length() == 0)
    {
        return;
    }

    if(s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else{
        cout << s[0];
        replacePi(s.substr(1));
    }
}
int main()
{
    replacePi("pippxxppiixipi");
    cout << endl;

    return 0;
}