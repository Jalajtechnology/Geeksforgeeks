//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>ans;
        vector<int>result(n+1,0);
        for(int i=0;i<n;i++)
        {
            result[arr[i]]++;
        }
        int repeating=0;
        int missingno=0;
        
        for(int i=1;i<result.size();i++)
        {
            if(result[i]==0)
            {
                missingno=i;
            }
            else if(result[i]==2)
            {
                repeating=i;
            }
            if(repeating !=0 && missingno!=0)
            {
                ans.push_back(repeating);
                ans.push_back(missingno);
                break;
            }
            
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends