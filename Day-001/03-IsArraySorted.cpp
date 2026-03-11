#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "False";
            return 0;
        }
    }
    cout << "True";
    return 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {8, 10, 5, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    isSorted(arr, n);

    return 0;
}