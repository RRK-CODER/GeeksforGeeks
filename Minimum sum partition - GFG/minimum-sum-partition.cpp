//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int maxSum=0;
	    for(int i=0; i<n;i++)
	    maxSum+=arr[i];
	    int k=maxSum;
	    vector<bool> prev(k+1,0),cur(k+1,0);
	    prev[0]=cur[0]=true;
	    prev[arr[0]]=true;
	    
	    for(int ind=1;ind<n; ind++){
	        for(int target=1; target<=k; target++)
	        {
	               bool notTake=prev[target];
	               bool take=false;
	               if(arr[ind]<=target) take=prev[target-arr[ind]];
	               cur[target]=take | notTake;
	        }
	        prev=cur;
	       }
	       int mini=1e9;
	       for(int m1=0; m1<=maxSum/2;m1++){
	           if(prev[m1]==true){
	               mini=min(mini,abs((maxSum-m1)-m1));
	           }
	       }
	       return mini;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends