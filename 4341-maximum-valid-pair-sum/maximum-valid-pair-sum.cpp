class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        long long int sum = 0;
        long long int maxi = INT_MIN;

        int greater = 0;
        for (int j = k; j < n; j++) {
            greater = max(greater, nums[j - k]);
            sum = nums[j] + greater;
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};