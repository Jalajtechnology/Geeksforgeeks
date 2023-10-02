//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long count=0;
        long long product=1;
        long long i=0;
        long long j=0;
         long long l=k-1;
        while(i<a.size())
        {
            while(product*a[j]<=l && j<a.size())
            {
                product=product*a[j];
                j++;
            }
            if(i==j)
            {
                i++;
                j++;
                product=1;
            }
            else if(i!=j && j!=a.size())
            {
                count=count+j-i;
                product=product/a[i];
                i=i+1;
            }
            else if(i!=j && j==a.size())
            {
                long long k=j-i;
                count=count+(k*(k+1)/2);
                break;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends