#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    //* Multiply both the number and then divide it by the GCD of both numbers
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

    cout << "Enter the number to find LCM " << endl;
    cin >> a >> b;

    cout << "The LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;

    return 0;
}