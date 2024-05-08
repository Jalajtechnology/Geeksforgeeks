//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    unordered_map<int,int>hashtable;
	    vector<int>arr;
	    if(N==1)
	    {
	        return {};
	    }
	    if(N==2 || N==3)
	    {
	        return {N};
	    }
	    int i=2;
	    
	    
	    while(i*i<=N && N!=1)
	    {
	        
	        if(N%i==0)
	        {
	            
	            
	            arr.push_back(i);
	            while(N%i==0)
	            {
	                N=N/i;
	            }
	        }
	        i++;
	    }
	    if(N>2)
	    {
	        arr.push_back(N);
	    }
	    
	    return arr;
          
          
          
		
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends