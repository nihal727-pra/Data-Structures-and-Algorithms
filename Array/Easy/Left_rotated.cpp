// LEFT ROTATED ARRAY 
#include <iostream>
#include <vector>
#include <utility> // For std::swap

using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int left, int right){
        while(left < right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;
        k %= n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};

// Helper function to print the vector contents
void printVector(const vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    // Test Case 1
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    cout << "Original array: ";
    printVector(nums1);
    solution.rotate(nums1, k1);
    cout << "Rotated by " << k1 << ": ";
    printVector(nums1);
    cout << endl;

    // Test Case 2
    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    cout << "Original array: ";
    printVector(nums2);
    solution.rotate(nums2, k2);
    cout << "Rotated by " << k2 << ": ";
    printVector(nums2);
    cout << endl;

    return 0;
}