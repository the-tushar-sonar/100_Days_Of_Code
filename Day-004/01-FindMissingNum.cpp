#include <iostream>
#include <vector>
using namespace std;

int MissingNum(const vector<int> &nums)
{
    int n = nums.size() + 1;
    // int sumN = (n * (n + 1)) / 2;
    long long sumN = (1LL * n * (n + 1)) / 2; // Edge Case: Integer Overflow

    int sumA = 0;
    for (int x : nums)
    {
        sumA += x;
    }
    // cout << "Sum of N no. :" << sumN << endl;
    // cout << "Sum of Array :" << sumA << endl;

    int miss = sumN - sumA;

    return miss;
}

int main()
{
    vector<int> nums = {8, 2, 4, 5, 3, 7, 1};

    int result = MissingNum(nums);
    cout << result << endl;

    return 0;
}
