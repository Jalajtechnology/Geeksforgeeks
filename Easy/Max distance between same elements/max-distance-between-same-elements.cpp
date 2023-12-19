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
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(hashtable.find(arr[i])==hashtable.end())
        {
            hashtable[arr[i]]=i;
        }
        else
        {
            if((i-hashtable[arr[i]])>max)
            {
                max=i-hashtable[arr[i]];
            }
            
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