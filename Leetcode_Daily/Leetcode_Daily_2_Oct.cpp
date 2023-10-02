/* Problem Link */
/* https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/ */
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        //initializing the counter variable
        int countA=0;
        int countB=0;
        for(int i=1;i<colors.size();i++){
            //matching condition for A and B
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i]){
                if(colors[i] =='A'){
                    countA++; // alice turns
                }
                //for B
                else{
                    countB++; //bob turns
                }
            }
        }
        // will return true if (countA>countB) else false
        return countA>countB;
    }
};