#include <bits/stdc++.h>
using namespace std;

void printFreq(int arr[], int n)
{
    int i = 1;
    int freq = 1;

    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << "The frequency of " << arr[i - 1] << " is " << freq << endl;
        freq = 1;
        i++;
    }

    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << "The frequency of " << arr[n - 1] << " is " << 1 << endl;
    }
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

    printFreq(arr, n);
    return 0;
}