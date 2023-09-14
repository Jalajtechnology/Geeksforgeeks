//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        
        // code here
        int sum=0;
        
        while(N!=0)
        {
            sum=sum+N%10;
            
            N=N/10;
        }
        int d=sum;
        vector<int>ans;
        while(d!=0)
        {
            ans.push_back(d%10);
            d=d/10;
        }
        int j=0;
        int i=ans.size()-1;
        int flag=0;
        while(j<i)
        {
            if(ans[j]!=ans[i])
            {
                return 0;
            }
            j++;
            i--;
            
        }
        return 1;
        
    
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends