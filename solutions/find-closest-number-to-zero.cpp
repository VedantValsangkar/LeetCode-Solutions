// https://leetcode.com/problems/find-closest-number-to-zero

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        return *min_element(begin(nums), end(nums), [](int a, int b) {
            return abs(a) < abs(b) || (abs(a) == abs(b) && a > b);
        });
    }
};