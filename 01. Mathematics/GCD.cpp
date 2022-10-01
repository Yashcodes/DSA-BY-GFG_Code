#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    //* First Simple method
    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         a = a - b;
    //     }
    //     else
    //     {
    //         b = b - a;
    //     }
    // }
    // return a;

    //* Other optimised method
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
int main()
{
    int a, b;

    cout << "Enter the number to find GCD or HCF" << endl;
    cin >> a >> b;

    cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;

    return 0;
}