#include <bits/stdc++.h>
using namespace std;

long long foo(int n){
    if (n==0){
        return 0;
    }

    if (n==1){
        return 1;
    }

    return foo(n-1)+foo(n-2);
}

int main(){
    int n = 50;
    for (int i = 0; i<n; i++){
        cout << "The " << i << "th fibonacci number is " << foo(i) << endl;
    }
}