#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
}

int combination(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    return ans;
}

int main()
{
    int n, r;

    cout << "Enter the value of n and r " << endl;
    cin >> n >> r;

    cout << "Combination is " << combination(n, r) << endl;
    return 0;
}