#include <bits/stdc++.h>
using namespace std;

int searchArray(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return i;
    }
    return -1;
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

    cout << "Enter the element tp search for: ";
    cin >> element;

    int result = searchArray(arr, n, element);

    cout << "The element found at index " << result << " and at position " << result + 1;

    return 0;
}