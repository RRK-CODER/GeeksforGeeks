//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
#define MAX 256

class Solution{

	bool compare(char arr1[], char arr2[]) {
	    for (int i = 0; i < MAX; i++)
	        if (arr1[i] != arr2[i]) return false;
	    return true;
	}

public:

	int search(string pat, string txt) {
	    int M = pat.size(), N = txt.size();

	    char countP[MAX] = {0}, countTW[MAX] = {0};
	    for (int i = 0; i < M; i++) {
	        (countP[pat[i]])++;
	        (countTW[txt[i]])++;
	    }
	    int ans = 0;

	    for (int i = M; i < N; i++) {
	        
	        if (compare(countP, countTW)) ans++;

	        (countTW[txt[i]])++;

	       
	        countTW[txt[i - M]]--;
	    }

	    	    if (compare(countP, countTW)) ans++;
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends