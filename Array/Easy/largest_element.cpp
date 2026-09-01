// LARGEST ELEMENT
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        if (nums.empty()) return -1; // Edge case check for empty array

        int largest = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    Solution solver;

    // Example test case
    vector<int> nums = {4, 7, 1, 9, 3, 12, 6};

    int result = solver.largestElement(nums);

    cout << "The largest element is: " << result << endl;

    return 0;
}