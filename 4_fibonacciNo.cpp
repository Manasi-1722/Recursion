#include <bits/stdc++.h>
using namespace std;

// Fibonacci series - 0,1,1,2,3,5,8,13,...
// Property :- Fib(n) = Fib(n-1) + Fib(n-2)

// Base condition 
// Fib(0) = 0  Fib(1) = 1

int fibonacci(int n)
{
    if(n == 0 || n == 1) 
    {
        return n;
    }

    int prev = fibonacci(n-1) + fibonacci(n-2);
    return prev;
}
int main()
{

    int n;
    cin>>n;
    cout << fibonacci(n) << endl;

    return 0;
}