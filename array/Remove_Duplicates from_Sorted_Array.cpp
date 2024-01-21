#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> seen;
        int i = 0; // Pointer to insert unique numbers

        for (int j = 0; j < nums.size(); j++)
        {
            if (!seen[nums[j]])
            {
                seen[nums[j]] = true;
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};