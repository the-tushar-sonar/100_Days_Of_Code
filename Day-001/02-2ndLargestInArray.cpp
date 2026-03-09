#include <bits/stdc++.h>
using namespace std;

int largestInArray(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            secondLargest = largest;
            largest = arr[i];
        }
    }
    cout << "2nd Largest Element : " << secondLargest << endl;
    return secondLargest;
}

int main()
{
    int n = 5;
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {8, 10, 5, 12, 9};

    largestInArray(arr, n);

    return 0;
}