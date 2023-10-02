/* Problem Link*/
/* https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1 */
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        //we have given a sorted array
    vector<int>ans;
        for(int i =0;i<n;i++){
            if(arr[i]== x) ans.push_back(i); //pushing all the indexes in a vector
            if(arr[i]!= x){
                if(arr[i-1]==x) ans.push_back(i-1);  //pushing the last index of target
            }
        }
        if(ans.size()==0) return {-1,-1}; // if not found , returned -1
        vector<int>v={ans[0],ans[ans.size()-1]}; //vector of first and last index of target
        return v; //returning the vector
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends