// . Check if Array Is Sorted and Rotated

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        if (n <= 1)
            return true;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
                if (count > 1)
                    return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solver;

    // Test Case 1: [3, 4, 5, 1, 2] -> Expected: true (Rotated sorted array)
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test 1 [3, 4, 5, 1, 2]: " 
         << (solver.check(nums1) ? "true" : "false") << "\n";

    // Test Case 2: [2, 1, 3, 4] -> Expected: false (More than one drop)
    vector<int> nums2 = {2, 1, 3, 4};
    cout << "Test 2 [2, 1, 3, 4]: " 
         << (solver.check(nums2) ? "true" : "false") << "\n";

    // Test Case 3: [1, 2, 3] -> Expected: true (Already sorted, 0 drops)
    vector<int> nums3 = {1, 2, 3};
    cout << "Test 3 [1, 2, 3]: " 
         << (solver.check(nums3) ? "true" : "false") << "\n";

    return 0;
}