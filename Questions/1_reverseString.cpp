#include <bits/stdc++.h>
using namespace std;


void reverse(string s)
{
    string org = s;
    if(s.length() == 0)
    {
        return;
    }

    string rest = s.substr(1);
    reverse(rest);
    cout << s[0];   
}

// bool palindrome(string s, string org)
// {
//     // palindrome
//     for(int i=0; i<s.length(); i++)
//     {
//         if(s[i] == org[i])
//             return true;
//         else 
//             return false;
//     }
// }
int main()
{
    reverse("maam");
    cout << endl;

    // palindrome(reverse("maam"), "maam");

    return 0;
}