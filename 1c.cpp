#include <bits/stdc++.h>
using namespace std;

long long foo(int n, vector<long long> &dp){ //passing the dp array by reference
    if (n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    if (dp[n]!=-1){
        return dp[n];
    }

    return dp[n] = foo(n-1, dp) + foo(n-2,dp);
}

int main(){
    int n = 50;
    vector <long long> dp(n+1,-1);
    cout << "The fibonacci numbers are as follows : " << endl;
    for (int i=0; i<n; i++){
        cout << i << " : " << foo(i,dp) << endl;
    }
    return 0;
}