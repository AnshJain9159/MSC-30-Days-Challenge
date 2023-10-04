/* https://leetcode.com/problems/set-matrix-zeroes/ */ 
/* Question No 73*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        // Set rows to zero
        for (int i = 0; i < row.size(); i++) {
            for (int j = 0; j < n; j++) {
                matrix[row[i]][j] = 0;
            }
        }

        // Set columns to zero
        for (int i = 0; i < col.size(); i++) {
            for (int j = 0; j < m; j++) {
                matrix[j][col[i]] = 0;
            }
        }
    }
};
