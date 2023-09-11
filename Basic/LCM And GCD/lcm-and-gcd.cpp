//{ Driver Code Starts
// I have use euclid algorithm for solving this question. it has complexity log (min(A,B)).
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long e=A;
        long long f=B;
        long long c=0;
        long long gcd;
        vector<long long>ans;
        while(A>0 && B>0)
        {
            if(A>=B)
            {
                A=A-B;
            }
            else if(B>A)
            {
                c=B;
                B=A;
                A=c;
                
            }
            
        }
        if(A==0 )
        {
            gcd=B;
            
            
        }
        else if(B==0)
        {
            gcd=A;
        }
        long long lcm=(e*f)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
