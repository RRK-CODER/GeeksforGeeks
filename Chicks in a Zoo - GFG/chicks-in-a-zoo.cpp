//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	   vector<long long> expire(n+6);
	   long long chickens=1;
	   expire[6]=1;
	   for(int i=1;i<n; i++){
	       if(i>=6) chickens-=expire[i];
	       expire[i+6]=(2*chickens);
	       chickens+=(2*chickens);
	   }
	   return chickens;
	   	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends