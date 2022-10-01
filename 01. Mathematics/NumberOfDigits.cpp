#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countDigit(long n)
{
    //* Iterative solution
    // int count = 0;
    // while (n != 0)
    // {
    //     n = n / 10;
    //     count++;
    // }
    // return count;

    //* Recursive solution
    //
        // if (n == 0)
        //     return 0;
        // return 1 + countDigit(n / 10);
    //

    //* Logarithmic solution

    return log10(n) + 1;
}

int main()
{
    int n;
    cout << "Enter the number to find the total number of digits " << endl;
    cin >> n;

    cout << "Number of digits are " << countDigit(n) << endl;

    return 0;
}