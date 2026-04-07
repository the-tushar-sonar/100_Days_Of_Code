#include <iostream>
#include <algorithm>
using namespace std;

void rotateBy1(int arr[], int n) // Optimal
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

    //   rotate(arr, arr + 1, arr + n); // In-build STL function

    rotateBy1(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}