//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
   bool findcows(vector<int>stalls,int distance,int k)
   {
       int cowno=1;
       int i=0;
       int j=i+1;
       while(j<stalls.size())
       {
           if(stalls[j]-stalls[i]>=distance)
           {
               i=j;
               j=i+1;
               cowno++;
               if(cowno==k)
               {
                   return true;
               }
           }
           else
           {
               j++;
           }
       }
       return false;
   }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        int min=1;
        int max=stalls[n-1]-stalls[0];
        int mid;
        int ans;
        while(min<=max)
        {
            mid=(min+max)/2;
            
            if(findcows(stalls,mid,k))
            {
                ans=mid;
                min=mid+1;
            }
            else
            {
                max=mid-1;
            }
        }
        return ans;
          
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends