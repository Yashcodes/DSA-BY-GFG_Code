#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
            return i;
    }
    return -1;
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