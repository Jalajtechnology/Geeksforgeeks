//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here 
        int max=INT_MIN;
        unordered_map<int,int>hashtable;
        int sum=0;
        int length=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if(sum==k)
            {
                length=i+1;
                if(length>max)
                {
                    max=length;
                }
                
            }
            
            if(hashtable.find(sum-k) !=hashtable.end())
                {
                    length=i-hashtable[sum-k];
                    if(length>max)
                    {
                        max=length;
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
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends