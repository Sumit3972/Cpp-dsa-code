int findMinIndex(const std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        // Check if the middle element is greater than the last element
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        }
        // Check if the middle element is smaller than the last element
        else if (nums[mid] < nums[right]) {
            right = mid;
        }
        // If the middle element is equal to the last element, move the right pointer one step to the left
        else {
            right--;
        }
    }

    // At the end of the loop, left will point to the minimum element
    return left;
}
