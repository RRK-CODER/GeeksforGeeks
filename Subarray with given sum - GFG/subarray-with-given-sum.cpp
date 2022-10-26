//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    { int curr_sum=arr[0];
        int start =0;
        vector <int> v1,v2{-1};
        
        for(int i=1; i<=n ; i++)
        {
            while(curr_sum>s && start<i-1)
            {
                curr_sum -=arr[start];
                start++;
            }
            if(curr_sum ==s)
            {
        v1.push_back(start+1);
        v1.push_back(i);
        return v1;
            }
            if(i<n)
            curr_sum+=arr[i];
        }
        return v2;
        // Your code here
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends