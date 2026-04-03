// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// Brute force
/*
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
        arr[i] = temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return temp.size();
}
    */

// 2 Pointer
// int findUnique(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {

//             if (arr[i] != arr[j] && arr[i] < arr[j])
//             {
//                 arr[i + 1] = arr[j];
//                 break;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

int findUnique(int arr[], int n)
{
    if (n == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1;
}

int main()
{

    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = findUnique(arr, n);

    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << k << endl;

    return 0;
}