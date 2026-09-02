// SENCOND LARGETS ELEMENT 
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondlargest(vector<int>&nums){
    int largest=INT_MIN, second=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>largest){
            second=largest;
            largest=nums[i];
        }
        else if(nums[i]<largest && nums[i]>second){
            second=nums[i];
        }
    }
    return (second==INT_MIN) ? -1 : second;

}
int main(){
    vector<int>nums={8, 8, 7, 6, 5};
    cout<<secondlargest(nums);
}