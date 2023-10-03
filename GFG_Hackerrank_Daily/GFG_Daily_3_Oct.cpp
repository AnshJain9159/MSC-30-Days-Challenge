/* Problem Link*/
/* https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1 */

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while(n>0){
            n--;
            int u = (n)%26 + 65;  
            ans+=char(u);
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;  
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends