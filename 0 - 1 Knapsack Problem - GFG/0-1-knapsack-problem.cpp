//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int maxWeight=W;
       vector<int>prev(maxWeight+1,0);
       for(int w=wt[0]; w<=maxWeight; w++)
         prev[w]=val[0];
        
        for(int ind=1; ind<n; ind++)
        {
            for(int w=maxWeight; w>=0; w--){
                int notTake= 0+ prev[w];
                int take=INT_MIN;
                if(wt[ind]<=w)
                take=val[ind]+prev[w-wt[ind]];
                prev[w]=max(take, notTake);
            }
        }
        return prev[maxWeight];
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends