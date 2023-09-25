//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string Addition(string A,string B)
    {
        string sum="";
        
        int carry=0;
        int i=A.size()-1;
        int j=B.size()-1;
        while(i>=0 && j>=0)
        {
            int d1=A[i]-'0';
            int d2=B[j]-'0';
            
            sum+=(d1+d2+carry)%10+'0';
            carry=(d1+d2+carry)/10;
            i--;
            j--;
            
        }
        while(i>=0)
        {
            int k=A[i]-'0'+carry;
            sum+=k%10+'0';
            carry=k/10;
            i--;
        }
        while(j>=0)
        {
            long long k=B[j]-'0'+carry;
            sum=k%10+'0';
            carry=k/10;
            j--;
        }
        if(carry!=0)
        {
            sum+=carry+'0';
        }
        reverse(sum.begin(),sum.end());
        
        for(int i=0;i<sum.size();i++)
        {
            if(sum[i]!='0')
            {
                return sum.substr(i);
            }
        }
        return "0";
    }
    string solve(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        string A="";
        string B="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                A+=arr[i]+'0';
            }
            else
            {
                B+=arr[i]+'0';
                
            }
        }
        
        return Addition(A,B);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends