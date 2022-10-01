#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
    int ans = 0;
    int temp = n;

    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp = temp / 10;
    }

    if (ans == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;

    cout << "Enter the number to check palindrome or not " << endl;
    cin >> n;

    int ans = palindrome(n);

    (ans) ? cout << "Yes" << endl : cout << "No" << endl;
}