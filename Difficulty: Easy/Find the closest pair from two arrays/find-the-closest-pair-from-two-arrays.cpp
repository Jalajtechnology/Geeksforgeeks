//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        
        //code here
        int i=0;
        int j=m-1;
        int max=INT_MIN;
        int min=INT_MAX;
        int p=0;
        int q=0;
        int r=0;
        int s=0;
        while((i<n )&& (j>=0))
        {
            int sum=arr[i]+brr[j];
            if(sum<=x)
            {
                if(sum>max)
                {
                    max=sum;
                    p=arr[i];
                    q=brr[j];
                }
                i++;
            }
            else
            {
                if(sum<min)
                {
                    min=sum;
                    r=arr[i];
                    s=brr[j];
                }
                j--;
            }
            
        }
        vector<int>ans;
        if(max==INT_MIN)
        {
            return {r,s};
        }
        else if(min==INT_MAX)
        {
            return {p,q};
        }
        int difference1=x-max;
        int difference2=min-x;
        if(difference1<=difference2)
        {
            ans.push_back(p);
            ans.push_back(q);
            
        }
        else
        {
            ans.push_back(r);
            ans.push_back(s);
        }
        return ans;
        
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