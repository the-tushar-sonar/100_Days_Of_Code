// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// Brute force
int findUnique(int arr[], int n)
{
    vector<int> temp;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp.push_back(arr[i]);
        }
    }
    temp.push_back(arr[n - 1]);

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }

    cout << endl;

    return temp.size();
}

int main()
{

    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = findUnique(arr, n);
    cout << k << endl;

    return 0;
}