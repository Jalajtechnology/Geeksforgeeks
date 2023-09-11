//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        double c=sqrt(N);
        int d=(int)c;
        int count=0;
        if(N==1)
        {
            return 0;
        }
        else if(N>1)
        {
            for(int i=2;i<=d;i++)
            {
                if(N%i==0)
                {
                    return 0;
                }
                
            }
        }
        return 1;
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends