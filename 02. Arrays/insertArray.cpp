#include <bits/stdc++.h>
using namespace std;

int insertArray(int arr[], int n, int pos, int cap, int elem)
{
    if (n == cap)
        return n;

    int index = pos - 1;

    for (int i = n - 1; i <= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = elem;

    return n + 1;
}

int main()
{
    int n, pos, cap, elem;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the capability of the array to store the data: ";
    cin >> cap;

    cout << "Enter the position at which the data is to be inserted: ";
    cin >> pos;

    cout << "Enter the element to be inserted: ";
    cin >> elem;

    int arr[n];

    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = insertArray(arr, n, pos, cap, elem);

    if (result == n)
    {
        cout << "Insertion not possible";
    }
    else if (result == n + 1)
    {
        cout << "Successfully inserted the element";
    }
    return 0;
}