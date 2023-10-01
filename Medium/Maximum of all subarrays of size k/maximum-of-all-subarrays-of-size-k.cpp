//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
         int j=0;
         int i=0;
         int max=INT_MIN;
         vector<int>ans;
         while(j<n)
         {
             if(i==0)
             {
                 int l=0;
                 for( l;l<=k-1;l++)
                 {
                     if(max<*(arr+l))
                     {
                         max=*(arr+l);
                     }
                 }
                 
                 ans.push_back(max);
                 if(arr[i]==max && k>=1)
                 {
                     max=INT_MIN;
                     for(int i=1;i<=l-1;i++)
                     {
                         if(arr[i]>max)
                         {
                             max=arr[i];
                         }
                     }
                 }
                 
                 i++;
                 j=l;
                 
             }
             else if(i>0)
             {
                 if(i!=j)
                 {
                     if(max>=*(arr+j))
                     {
                         
                         
                         ans.push_back(max);
                     }
                     else if (max<*(arr+j))
                     {
                         
                         
                         max=*(arr+j);
                         
                         ans.push_back(max);
                     }
                     if(*(arr+i)==max)
                     {
                         max=INT_MIN;
                         
                         for(int p=i+1;p<=j;p++)
                         {
                             if(max<*(arr+p))
                             {
                                 
                                 max=*(arr+p);
                             }
                         }
                         
                     }
                     i++;
                     j++;
                 }
                 else if(i==j)
                 {
                     ans.push_back(*(arr+i));
                     i++;
                     j++;
                 }
             }
         }
         return ans;
    }
        
            
            
            
            
        
        
        
    
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends