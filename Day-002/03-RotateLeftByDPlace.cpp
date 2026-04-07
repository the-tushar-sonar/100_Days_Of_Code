#include <bits/stdc++.h>
using namespace std;

void rotateByD(int arr[], int n)
{
    if (n <= 1)
        return;

    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int d = 3;

    for (int i = 0; i < d; i++) // Time Complexity ==> O(n*d)
    {
        rotateByD(arr, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}