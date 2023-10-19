/* Problem Link
 https://leetcode.com/problems/backspace-string-compare/  */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string compS;
        string compT;
        for (auto c1: s){
            if(!compS.empty() && c1 == '#'){
                compS.pop_back();
            } else {
                if(c1 != '#'){
                    compS.push_back(c1);
                }
            }
        }
        for (auto c2: t){
            if(!compT.empty() && c2 == '#'){
                compT.pop_back();
            } else {
                if(c2 != '#'){
                    compT.push_back(c2);
                }
            }
        }
        return compS == compT;
    }
};