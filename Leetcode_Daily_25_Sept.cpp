class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
      //sorting both the strings
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++)
        {
            if (s[i]!=t[i]) return t[i];//returning the different character
        }
        return t[n]; //returning the last character if not fiund in middle
    }
};
