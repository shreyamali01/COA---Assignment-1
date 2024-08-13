#include <bits/stdc++.h>
using namespace std;

int foo(int n){
    if (n==1){
        return 0;
    }

    if (n==1){
        return 1;
    }

    return foo(n-1)+foo(n-2);
}

int main(){
    int n = 50;
    int ans = foo(n);
    cout << "The first 50 fibonacci numbers are" << ans << endl;
}