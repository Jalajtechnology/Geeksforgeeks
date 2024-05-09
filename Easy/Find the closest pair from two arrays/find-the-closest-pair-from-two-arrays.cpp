//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
         int p=0;
         int q=0;
         int min=INT_MAX;
         if(brr[m-1]>=arr[n-1])
         {
             int j=m-1;
             int i=0;
             while(i<n && j>=0)
             {
                 if((arr[i]+brr[j])>x)
                 {
                     int sum=arr[i]+brr[j];
                     int difference=sum-x;
                     if(difference<min)
                     {
                         min=difference;
                         p=arr[i];
                         q=brr[j];
                     }
                     j--;
                 }
                 else
                 {
                     int sum=arr[i]+brr[j];
                     int difference=x-sum;
                     if(difference<min)
                     {
                         min=difference;
                         p=arr[i];
                         q=brr[j];
                     }
                     i++;
                 }
             }
         }
         else
         {
             int j=n-1;
             int i=0;
             while(i<m && j>=0)
             {
                 if((brr[i]+arr[j])>x)
                 {
                     int sum=arr[j]+brr[i];
                     int difference=sum-x;
                     if(difference<min)
                     {
                         min=difference;
                         p=arr[j];
                         q=brr[i];
                     }
                     j--;
                 }
                 else
                 {
                     int sum=arr[j]+brr[i];
                     int difference=x-sum;
                     if(difference<min)
                     {
                         min=difference;
                         p=arr[j];
                         q=brr[i];
                     }
                     i++;
                 }
             }
             
         }
         return {p,q};
         
       
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends