//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void fibonacii(long long first,long long second,int count,int &N,vector<long long>&ans)
  {
      if(count>N)
      {
          return ;
      }
      long long k=first+second;
      ans.push_back(k);
      count=count+1;
      fibonacii(second,k,count,N,ans);
      
      
      
  }
    
    vector<long long> Series(int N) {
        // COde here
        long long first=0;
        long long second=1;
        vector<long long>ans;
        ans.push_back(first);
        ans.push_back(second);
        int count=2;
        fibonacii(first,second,count,N,ans);
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
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends