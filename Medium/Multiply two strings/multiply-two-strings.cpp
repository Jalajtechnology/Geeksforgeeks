//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
       string str;
       vector<int>nums(s1.length()+s2.length(),0);
       int flag=0;
       if(s1[0]=='-' && s2[0]=='-')
       {
           s1[0]='0';
           s2[0]='0';
           str="";
       }
       else if(s1[0]=='-' && s2[0]!='-')
       {
           s1[0]='0';
           str="-";
       }
       else if(s2[0]=='-' && s1[0]!='-')
       {
           s2[0]='0';
           str="-";
       }
       for(int i=s2.size()-1;i>=0;i--)
       {
           for(int j=s1.size()-1;j>=0;j--)
           {
               int p=(s2[i]-'0')*(s1[j]-'0');
               nums[i+j+1]=p+nums[i+j+1];
               nums[i+j]=nums[i+j]+nums[i+j+1]/10;
               nums[i+j+1]=nums[i+j+1]%10;
           }
       }
       int i=0;
       while(nums[i]==0 )
       {
           i++;
       }
       if(i>=nums.size())
       {
           return "0";
       }
       for(int j=i;j<nums.size();j++)
       {
           str.push_back(nums[j]+'0');
       }
       
       return str;
       
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends