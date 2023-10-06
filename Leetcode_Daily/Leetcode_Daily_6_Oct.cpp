/* Problem Link*/
/*  https://leetcode.com/problems/integer-break/ */
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int integerBreak(int n) {
        if(n<=3){
            return n-1; // if n is less than equal to 3 
        }
     int ans = 1;
        while(n!=0){
            if(n==4||n==2){
                ans = ans*n;
                break;
            }
            ans = ans*3;
            n = n-3;
        }
        return ans; //ans is maximized product
    }
};