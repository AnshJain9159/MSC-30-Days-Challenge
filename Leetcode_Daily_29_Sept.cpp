/* Problem Link */
/* https://leetcode.com/problems/monotonic-array/ */ 
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>inc = nums;
        vector<int>dec = nums;
      //sorting both the vectors and reversing the decreasing order one.
        sort(inc.begin(),inc.end()); 
        sort(dec.begin(),dec.end());
        reverse(dec.begin(),dec.end());
      //checking if there is no peak element in between the vector,than we should return true else false.
        if((nums == inc) || (nums==dec)) return true;
        return false;
    }
};
