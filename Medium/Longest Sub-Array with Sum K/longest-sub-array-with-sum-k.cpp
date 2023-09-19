//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>hashtable;
        int sum=0;
        int max=INT_MIN;
        int length=0;
        for(int i=0;i<N;i++)
        {
            sum=sum+A[i];
            if(sum==K)
            {
                length=i+1;
                if(length>max)
                {
                    max=length;
                }
                
            }
            else if(sum !=K)
            {
                if(hashtable.find(sum-K)!=hashtable.end())
                {
                    length=i-hashtable[sum-K];
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
            
        
        if(max==INT_MIN)
        {
            return 0;
        }
        return max;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends