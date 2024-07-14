//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
        int countPairs(int a[], int n, int k)
    {
        sort(a,a+n);
        int j=0;
        int i=0;
        int count=0;
        while(j<n)
        {
            int difference=a[j]-a[i];
            while(difference>=k)
            {
                i++;
                difference=a[j]-a[i];
            }
            
            
            count=count+(j-i+1);
            
            j++;
        }
        return (count-n);
        
        
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k; int a[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    Solution ob;
	    cout << ob.countPairs(a, n, k) << endl; 
	}
	return 0;
}

// } Driver Code Ends