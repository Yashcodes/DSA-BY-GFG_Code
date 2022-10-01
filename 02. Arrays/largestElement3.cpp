#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The largest element in the array is " << arr[getLargest(arr, n)] << " at index " << getLargest(arr, n);

    return 0;
}