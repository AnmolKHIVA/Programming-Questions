//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:



bool solve(vector<int> &arr, int k, int index, int sum , vector<vector<int> > &dp ) {
        if(sum==k){
            return true ;
        }
        // if( index < 0 && sum == k ){
        //     return true ;
        // }
        if(index < 0){
            return false ;
        }
        if(sum>k) return false ;
        if(dp[index][sum]!= -1){
            return dp[index][sum] ;
        }

        bool include = solve( arr , k , index-1 , sum+arr[index] , dp ) ;
        bool exclude = solve( arr , k , index-1 , sum , dp ) ;

        dp[index][sum] = include || exclude ;  
        return dp[index][sum] ;

}

    bool isSubsetSum(vector<int>arr, int k){
        // code here 
    // Write your code here.
    int index = arr.size()-1 ;
    int n = arr.size() ;
    int sum=0 ;
    vector<vector<int>> dp(n ,vector<int> ( k+1 , -1 ) ) ;
    bool ans = solve(arr , k , index , sum , dp) ;
    return ans ;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends