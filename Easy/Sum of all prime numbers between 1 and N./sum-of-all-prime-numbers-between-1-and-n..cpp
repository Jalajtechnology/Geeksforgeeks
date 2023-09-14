//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    vector<bool>arr(n+1,1);
   	    arr[0]=0;
   	    arr[1]=0;
   	    for(int i=2;i<=n;i++)
   	    {
   	        if(arr[i]==1)
   	        {
   	        for(int j=2*i;j<=n;j=j+i)
   	        {
   	            
   	            arr[j]=0;
   	        }
   	        }
   	    }
   	    long long sum=0;
   	    for(int i=0;i<=n;i++)
   	    {
   	        if(arr[i]==1)
   	        {
   	            sum=sum+i;
   	        }
   	    }
   	    return sum;
   	    
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends