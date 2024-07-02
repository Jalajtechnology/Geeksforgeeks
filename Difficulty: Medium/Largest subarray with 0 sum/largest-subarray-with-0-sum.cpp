//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int>hashtable;
        int sum=0;
        int max=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum==0)
            {
                if((i+1)>max)
                {
                    max=i+1;
                }
            }
            else if(sum!=0)
            {
                if(hashtable.find(sum)!=hashtable.end())
                {
                    int length=i-hashtable[sum-0];
                    if(length>max)
                    {
                        max=length;
                    }
                }
            }
            if(hashtable.find(sum)==hashtable.end())
            {
                hashtable[sum]=i;
            }
            
        }
        
        return max;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends