/* Problem Link */;
/*  https://leetcode.com/problems/majority-element-ii/ */
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        double k=n/3.0; 
        vector<int>v;
        unordered_map<int,int> mp;
        for(auto ele:nums) mp[ele]++;
        for(auto ele:mp) {
            if (ele.second>k) v.push_back(ele.first); //if freq is greater than k, push the key in vector
        }
        return v;
    }
};