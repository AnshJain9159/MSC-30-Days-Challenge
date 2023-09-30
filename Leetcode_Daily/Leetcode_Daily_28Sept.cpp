/* https://leetcode.com/problems/sort-array-by-parity/?envType=daily-question&envId=2023-09-28 */
#include<iostream>
#include<algorithm>

#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        if(n==1) return nums;
        while(i<=j){
            if((nums[i]%2!=0) && (nums[j]%2==0)){
                swap(nums[i],nums[j]); //swapping if nums[i] is even and nums[j] is odd
                i++;
                j--;
            }
           else if(nums[i]%2==0) i++; //only moving forward if nums[j] was not odd
            else if(nums[j]%2!=0) j--; //only moving backward if nums[i] was not even
        }
            return nums;
    }
};
