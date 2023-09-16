//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here 
        long long int n=2;
        long long int Num=N;
        while(n*n<=Num)
        {
            if(Num%n==0)
            {
                Num=Num/n;
            }
            else
            {
                n++;
            }
            
            
        }
        return Num;
        }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends