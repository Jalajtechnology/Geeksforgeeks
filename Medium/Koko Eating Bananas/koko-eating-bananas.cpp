//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findhours(int mid,vector<int>piles)
    {
        int hours=0;
        for(int i=0;i<piles.size();i++)
        {
            if(mid>piles[i])
            {
                hours=hours+1;
            }
            else
            {
                int k=piles[i]/mid;
                int l=piles[i]%mid;
                if(l==0)
                {
                    hours=hours+k;
                }
                else
                {
                    hours=hours+k+1;
                }
            }
        }
        return hours;
    }
    int Solve(int N, vector<int>& piles, int H) {
        
        // Code here
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {
            if(min>piles[i])
            {
                min=piles[i];
            }
            if(max<piles[i])
            {
                max=piles[i];
            }
        }
        
        int start=1;
        int end=max;
        int mid=(start+end)/2;
        while(start<end)
        {
            int hours=findhours(mid,piles);
            
            
            if(hours<=H)
            {
                end=mid;
            }
            else
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return start;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends