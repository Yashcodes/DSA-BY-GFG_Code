#include <bits/stdc++.h>
using namespace std;

int deleteArray(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
            break;
    }
    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main()
{
    int n, element;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be deleted: ";
    cin >> element;

    cout << deleteArray(arr, n, element);
    return 0;
}