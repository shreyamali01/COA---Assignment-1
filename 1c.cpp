#include <bits/stdc++.h>
using namespace std;

int foo(int n, vector<int> &dp){ //passing the dp array by reference
    if (n<=1){
        return n;
    }

    if (dp[n]!=-1){
        return dp[n];
    }

    return foo(n-1, dp) + foo(n-2,dp);
}

int main(){
    int n = 50;
    vector <int> dp(n+1,-1);
    for (int i=0; i<n; i++){
        cout << i << " : " << foo(i,dp) << endl;
    }
    return 0;
}