class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 0), right(n, 0), ans(n, 0);
        left[0] = nums[0], right[n-1] = nums[n-1];
        for(int i=1; i<n; i++) left[i] = left[i-1]+nums[i];
        for(int i=n-2; i>=0; i--) right[i] = right[i+1]+nums[i];
        for(int i=0; i<n; i++) ans[i] = abs(right[i] - left[i]);
        return ans;
    }
};
