/* Problem Link*/
/* https://leetcode.com/problems/reverse-words-in-a-string-iii/ */
#include<iostream>
#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans = ""; //answer string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') { // adding the characters in stack
                st.push(s[i]);
            } else {
                while (!st.empty()) { //adding the reversed characters in string
                    ans += st.top();
                    st.pop();
                }
                ans += ' '; // Adding space between word
            }
        }
      while (!st.empty()) {      // for adding the last word , this loop is neccesary 
            ans += st.top();
            st.pop();
        }
      
        return ans;
    }
};