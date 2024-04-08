//给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。
//
//如果数组中不存在目标值 target，返回[-1, -1]。
//
//你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。


/*class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return { -1, -1 };

        int begin = 0;

        // 1.二分查找
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        if (nums[left] != target)
            return { -1, -1 };
        else
            begin = left;

        // 2.二分右端点查找
        left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left + 1) / 2;
            if (nums[mid] <= target)
                left = mid;
            else
                right = mid - 1;
        }
        return { begin, right };
    }

};*/

