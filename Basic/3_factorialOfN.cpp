#include <bits/stdc++.h>
using namespace std;

// n! = n * n-1 * n-2 * .... * 1

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int prev = factorial(n - 1);
    return n * prev;
}
int main()
{
    int n;
    cin>>n;
    cout << factorial(n) << endl;

    return 0;
}