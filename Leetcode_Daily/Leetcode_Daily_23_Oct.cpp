/* Problem Link
 https://leetcode.com/problems/power-of-four/submissions/ */
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        while(n%4==0) n/=4;
        return n==1;
    }
};