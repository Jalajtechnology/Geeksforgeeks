//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
    unordered_map<int,int>hashtable;
    int maxdistance=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(hashtable.find(arr[i])!=hashtable.end())
        {
            int k=i-hashtable[arr[i]];
            if(k>maxdistance)
            {
                maxdistance=k;
            }
        }
        else
        {
            hashtable[arr[i]]=i;
        }
        
    }
    if(maxdistance==INT_MIN)
    {
        return 0;
    }
    return maxdistance;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends