#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 15 == 0 || i % 21 == 0 || i % 35 == 0)
            continue;
        else if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            cout << i << " ";
    }

    cout << endl;

    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0 && i % 5 == 0) || (i % 5 == 0 && i % 7 == 0) || (i % 7 == 0 && i % 3 == 0))
            continue;
        else if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            cout << i << " ";
    }

    return 0;
}