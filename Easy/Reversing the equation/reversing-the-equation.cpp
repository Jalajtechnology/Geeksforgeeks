//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            vector<string>arr;
            string str="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='+' && s[i] !='-' && s[i]!='*' && s[i]!='/')
                {
                    str=str+s[i];
                }
                else if(s[i]=='+'|| s[i]=='*' || s[i]=='/' || s[i]=='-')
                {
                    arr.push_back(str);
                    str="";
                    str=str+s[i];
                    arr.push_back(str);
                    str="";
                    
                }
            }
            arr.push_back(str);
            int i=0;
            int j=arr.size()-1;
            while(i<=j)
            {
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            string ans="";
            for(int i=0;i<arr.size();i++)
            {
                ans=ans+arr[i];
            }
            return ans;
        }
};
            
            

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends