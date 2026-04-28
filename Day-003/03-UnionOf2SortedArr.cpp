#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> unionSet(vector<int> &nums1, vector<int> &nums2)
{
    set<int> s;
    for (int x : nums1)
    {
        s.insert(x);
    }

    for (int x : nums2)
    {
        s.insert(x);
    }

    return s;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    set<int> result = unionSet(nums1, nums2);

    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}