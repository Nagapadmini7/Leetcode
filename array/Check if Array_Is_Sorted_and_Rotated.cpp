#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> rotate(vector<int> &nums, int x)
    {
        vector<int> rotated(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            rotated[i] = nums[(i + x) % nums.size()];
        }
        return rotated;
    }

    bool check(vector<int> &nums)
    {
        for (int x = 0; x < nums.size(); x++)
        {
            vector<int> rotated = rotate(nums, x);

            // Check if the rotated array is sorted
            bool isSorted = true;
            for (int i = 1; i < rotated.size(); i++)
            {
                if (rotated[i] < rotated[i - 1])
                {
                    isSorted = false;
                    break;
                }
            }

            if (isSorted)
            {
                return true;
            }
        }

        return false;
    }
};