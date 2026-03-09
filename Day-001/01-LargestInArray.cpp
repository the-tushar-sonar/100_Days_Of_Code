#include <bits/stdc++.h>
using namespace std;

int largestInArray(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Largest Element : " << largest << endl;
    return largest;
}

int main()
{
    int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {8, 10, 5, 12, 9};

    largestInArray(arr, n);

    return 0;
}