#include <bits/stdc++.h>
using namespace std;

void printFactors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != (n / i))
            {
                cout << n / i << " ";
            }
        }
    }
}

int main()
{
    int n;

    cout << "Enter to number to print its factors " << endl;
    cin >> n;

    printFactors(n);
    return 0;
}