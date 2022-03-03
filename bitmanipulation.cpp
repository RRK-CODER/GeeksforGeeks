// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int countBits(int N, long long int A[])
    {
        long long int mod = 1000000007;
        long long int ans=0;
        
        for(int i=0; i<32; i++)
        {
            long long int count=0;
            for(int j=0; j<N; j++)
            {
                if((A[j] & (1<<i)))
                count++;
            }
        
        ans+=(count*(N-count)*2) % mod;
        if(ans>=mod)
        ans-=mod;
        }
    
    return ans;
    }
};
/*
class Solution{
public:
    int countBits(int N, long long int A[])
    {
        long long int mod = 1000000007;
        int ans = 0;
        // traverse over all bits
        for(int i = 0; i < 31; i++){
            long long int count = 0;
            
            // count number of elements with ith bit = 0
            for(int j = 0; j < N; j++){
                if(A[j] & (1 << i))
                    count++;
            }
            
            // add to answer count * (n - count) * 2
            ans += (count * ((long long int)N - count) * 2LL) % mod;
            if(ans >= mod)
                ans -= mod;
        }
        return ans;
    }
};
*/
// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long int A[N];
        for(int i = 0;i < N; i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.countBits(N, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends