#include <bits/stdc++.h>
using namespace std;

long long foo(int n){

    if (n<=1){
        return n;
    }

    long long prev1 = 1;
    long long prev2 = 0;
    long long ans;

    for(int i=2; i<=n; i++){
        ans = prev1 + prev2;
        prev2 = prev1;
        prev1 = ans;
    }
    return ans;
}

int main(){
    int n = 50;
    cout << "The fibonacci numbers are as follows : " << endl;
    for (int i=0; i<n; i++){
        cout << i << " : " << foo(i) << endl;
    }
    return 0;
    
}