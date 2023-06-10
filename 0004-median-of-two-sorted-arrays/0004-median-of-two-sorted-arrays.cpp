class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        int m = nums1.size();
        int n = nums2.size();
        int totalLen = m + n;
        int halfLen = (totalLen + 1) / 2;

        int left = 0;
        int right = m;

        while (left <= right) {
            int partitionX = (left + right) / 2;
            int partitionY = halfLen - partitionX;

            int maxX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int maxY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minX = (partitionX == m) ? INT_MAX : nums1[partitionX];
            int minY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            if (maxX <= minY && maxY <= minX) {
                if (totalLen % 2 == 0) {
                    int leftMax = max(maxX, maxY);
                    int rightMin = min(minX, minY);
                    return (leftMax + rightMin) / 2.0;
                } else {
                    return max(maxX, maxY);
                }
            } else if (maxX > minY) {
                right = partitionX - 1;
            } else {
                left = partitionX + 1;
            }
        }

        return 0.0; // Return 0.0 if arrays are not sorted
    }
};
