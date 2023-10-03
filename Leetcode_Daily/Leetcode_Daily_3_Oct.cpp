/* Problem Link*/
/* https://leetcode.com/problems/number-of-good-pairs/submissions/ */
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
long double fact(int n) { //factorial funciton
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

    long double com(int n){ //combination function returning NcR
        return  fact(n) / (fact(2) * fact(n-2));

    }
    int numIdenticalPairs(vector<int>& nums) {
        
        map<int,int>mp;
        for(auto x : nums) mp[x]++; 
        long double count = 0;
        for(auto x:mp){
            if(x.second >=2){
                count += com(x.second);
            }
        }
        return (int)count;

    }
};