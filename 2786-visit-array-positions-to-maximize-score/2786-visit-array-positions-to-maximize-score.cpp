class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
    vector<long long> maxScore(2, 0);
        long long currentScore = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            int parity = nums[i] % 2;
            long long potentialScore =max(0LL,max(maxScore[parity], maxScore[1 - parity] - x) + static_cast<long long>(nums[i]));
            maxScore[parity] = max(maxScore[parity], potentialScore);
            currentScore = potentialScore;
        }

        return currentScore;
    }
};