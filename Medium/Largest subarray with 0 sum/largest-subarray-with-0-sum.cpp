//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int>hashtable;
        int max=0;;
        int length=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            if(sum==0)
            {
                length=i+1;
                if(length>max)
                {
                    max=length;
                }
            }
            else if(sum !=0)
            {
                if(hashtable.find(sum-0)!=hashtable.end())
                {
                    length=i-hashtable[sum-0];
                    if(length>max)
                    {
                        max=length;
                    }
                }
            }
            if(hashtable.find(sum)==hashtable.end())
            {
                hashtable[sum]=i;
            }
            
        }
        
        return max;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends