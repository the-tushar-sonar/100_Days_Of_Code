#include <iostream>
#include <vector>
using namespace std;

// Brute Force ==> Time Complexity: O(n)    Space Complexity: O(n)
vector<int> moveZerosBrute(vector<int> &arr)
{
    vector<int> result;

    // add non-zeros
    for (int x : arr)
    {
        if (x != 0)
        {
            result.push_back(x);
        }
    }

    // add zeros
    int zeroCount = arr.size() - result.size();
    while (zeroCount--)
    {
        result.push_back(0);
    }

    return result;
}

// 2 pointer ==> Time Complexity: O(n)    Space Complexity: O(1)
void moveZeros(vector<int> &arr)
{
    int i = 0; // position for next non-zero

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeros(arr);

    // for (int x : moveZerosBrute(arr))
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
