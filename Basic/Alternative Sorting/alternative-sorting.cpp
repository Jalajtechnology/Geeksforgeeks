//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    sort(arr,arr+N);
	    int i=0;
	    int j=N-1;
	    vector<int>result;
	    while(i<j)
	    {
	        result.push_back(arr[j]);
	        result.push_back(arr[i]);
	        j--;
	        i++;
	        
	    }
	    if(i==j)
	    {
	        result.push_back(arr[i]);
	    }
	    return result;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends