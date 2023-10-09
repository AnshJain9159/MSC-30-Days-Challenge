/* Problem Link */
/* https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/ */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector <int> v;
    int count=0;
    int n=nums.size();
    sort(nums.begin(),nums.end());
    //int counttar=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            v.push_back(i); //pushing index where target found
         //  counttar++;
        }
        else count++;
    }
    int m=v.size();
    if(m>2){ //return first and last index of the target
        return {v[0],v[m-1]};
    }
    if(count==n-1){ 
        v.push_back(v[0]);
        return v;
    }
    if(n==0 || count==n){  //empty vector nums
        return {-1,-1};
    }
    if(count==0){ //all index got target value
        return {0,n-1};
    }
    else return v;
    }
};