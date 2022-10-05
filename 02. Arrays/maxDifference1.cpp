#include <bits/stdc++.h>
using namespace std;

int maxDifference(int arr[], int n)
{
    int diff = arr[1] - arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            diff = max(diff, arr[j] - arr[i]);
        }
    }
    return diff;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Maximum difference between the elements is " << maxDifference(arr, n);

    return 0;
}