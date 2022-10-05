#include <bits/stdc++.h>
using namespace std;

void arrayLeaders(int arr[], int n)
{
    cout << arr[n - 1] << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
}

// void arrayLeaders(int arr[], int n)
// {
//     int curr_leader = arr[n - 1];
//     cout << curr_leader << " ";

//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (curr_leader < arr[i])
//         {
//             curr_leader = arr[i];
//             cout << curr_leader << " ";
//         }
//     }
// }

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

    arrayLeaders(arr, n);

    return 0;
}