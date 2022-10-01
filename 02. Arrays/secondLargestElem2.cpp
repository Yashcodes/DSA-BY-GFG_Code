#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0;
    int res = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (res == -1 && arr[i] > arr[res])
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

    cout << "The second largest element in the array is " << arr[secondLargest(arr, n)] << " at index " << secondLargest(arr, n);

    return 0;
}