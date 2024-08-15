#include <bits/stdc++.h>
using namespace std;

long long foo(int n, vector<long long> dp){
    
    if (n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    if (dp[n]!=-1){
        return dp[n];
    }

    long long prev2 = 0;
    long long prev1 = 1;
    long long ans;

    for (int i=2; i<=n; i++){
        ans = prev1 + prev2;
        prev2 = prev1;
        prev1 = ans;
    }
    return dp[n]=ans;

    
}

int main(){
    int n = 50;
    vector <long long> dp(n+1,-1);
    for (int i=0; i<n; i++){
        cout << i << " : " << foo(i,dp) << endl;
    }
    return 0;
}