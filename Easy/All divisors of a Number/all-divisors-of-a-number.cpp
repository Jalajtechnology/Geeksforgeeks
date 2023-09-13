//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        set<int>hashtable;
        double k=sqrt(n);
        int q=k;
        for(int i=1;i<=q;i++)
        {
            if(n%i==0)
            {
                int k=n/i;
                hashtable.insert(i);
                hashtable.insert(k);
                
            }
        }
        for(auto it:hashtable)
        {
            cout<<it<<" ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends