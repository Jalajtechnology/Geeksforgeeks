//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSquares(int N) {
        // code here
         double c=sqrt(N);
         int count=0;
         int p=(int)c;
         if((p*p)==N)
         {
             p=p-1;
         }
         for(int i=1;i<=p;i++)
         {
             count=count+1;
         }
         return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends