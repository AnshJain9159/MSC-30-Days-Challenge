/* https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1 */
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        vector<int> row;
        vector<int> col;
        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }

        // Set rows to zero
        for (int i = 0; i < row.size(); i++) {
            for (int j = 0; j < n; j++) {
                matrix[row[i]][j] = 1;
            }
        }

        // Set columns to zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j <col.size() ; j++) {
                matrix[i][col[j]] = 1;
            }
        } 
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends