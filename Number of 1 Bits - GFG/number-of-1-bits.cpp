//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int count=0 ;
    int setBits(int N) {
        // Write Your Code here
            
        while(N!=0){
            int rem= N%2 ;
            if(rem&1==1){
                count++ ;
            }
            N=N/2 ;
        }
        return count ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends