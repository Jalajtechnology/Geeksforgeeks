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
        int sum=0;
        int max=INT_MIN;
        unordered_map<int,int>hashtable;
        for(int i=0;i<n;i++)
        {
            sum=sum+A[i];
            if(sum==0)
            {
                max=i+1;
                
            }
            else if(sum!=0)
            {
                if(hashtable.find(sum)!=hashtable.end())
                {
                    int length=i-hashtable[sum];
                    if(max<length)
                    {
                        max=length;
                    }
                }
                else if(hashtable.find(sum)==hashtable.end())
                {
                    hashtable[sum]=i;
                }
            }
            
            
        }
        if(max==INT_MIN)
        {
            return 0;
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