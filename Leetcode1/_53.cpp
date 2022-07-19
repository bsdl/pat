//
// Created by bsdl on 2021/3/20.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int *dp = new int[nums.size()];
        dp[0] = nums[0];
        int maxVal = INT32_MIN;
        for (int i = 1; i < (int) nums.size(); i++) {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            maxVal = maxVal < dp[i] ? dp[i] : maxVal;
        }
        return maxVal;
    }
};