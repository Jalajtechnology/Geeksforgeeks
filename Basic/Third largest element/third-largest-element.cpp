//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int max3=INT_MIN;
         if(n<2)
         {
             return 0;
         }
         else if(n>2)
         {
             int max1=INT_MIN;
             for(int i=0;i<n;i++)
             {
                 if(a[i]>max1)
                 {
                     max1=a[i];
                 }
             }
             int max2=INT_MIN;
             for(int i=0;i<n;i++)
             {
                 if(a[i]!=max1 && a[i]>max2)
                 {
                     max2=a[i];
                 }
             }
             
             for(int i=0;i<n;i++)
             {
                 if(a[i]!=max2 &&a[i]!=max1 && a[i]>max3)
                 {
                     max3=a[i];
                 }
             }
         }
         return max3;
         
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
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends