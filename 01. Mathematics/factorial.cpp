#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    //* Iterative method

    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }

    // return fact;

    //* Recursive method

    // if (n <= 1)
    // {
    //     return 1;
    // }

    // return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter the number to calculate factorial " << endl;
    cin >> n;

    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}