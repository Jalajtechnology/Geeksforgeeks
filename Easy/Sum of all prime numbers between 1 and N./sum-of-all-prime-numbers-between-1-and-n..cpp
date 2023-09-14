//{ Driver Code Starts
//Initial Template for C++
// Time complexity is n(log(logn)) used sieve algorithm  if n=18
// for i=2  n/2 times inner loop will run for i=3 inner loop will run n/3 i=n ----n/ntimes
//Tc :n/2+n/3+n/4+------------n/n
//n(1/2+1/3+1/4+------1)
//nlogn without condition arr[i]==1 with condition n(log(log(n)))
//space complexity O(1)
//Sieve algorithm is used .

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
