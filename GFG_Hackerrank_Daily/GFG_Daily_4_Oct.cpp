/* Problem Link*/
/* https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1 */
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &s) {
        int previous=0,actual=1,sum=0,c=s.size(),c1=0,count=0;
    while(actual<=c)
    {
        if(s[previous]=='I')
        {   
            if(s[actual]=='V')
            { sum+=4;
             previous+=2;
             actual+=2;
             continue;
             }
            else if(s[actual]=='X')
            {
            sum+=9;
            previous+=2;
            actual+=2;
            continue;
            }
            else
            {
            sum+=1;
            }
        }
        else if(s[previous]=='X')
        {
            if(s[actual]=='L')
            {sum+=40;
 previous+=2;
            actual+=2;
            continue;}
            else if(s[actual]=='C')
            {            sum+=90;
 previous+=2;
            actual+=2;
            continue;}
            else 
            {
            sum+=10;
            }
        }
        else if(s[previous]=='C')
        {
            if(s[actual]=='D')
            {
            sum+=400;
             previous+=2;
            actual+=2;
            continue;}
            else if(s[actual]=='M')
            {
            sum+=900;
             previous+=2;
            actual+=2;
            continue;}
            else
            {
            sum+=100;
            }
        }
        else
        {
            if(s[previous]=='L')
            {
                sum+=50;
            }
            else if(s[previous]=='M')
            sum+=1000;
            else if(s[previous]=='D')
            sum+=500;
            else if(s[previous]=='V')
            sum+=5;
        }
actual++;
previous++;
    }
    return sum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends