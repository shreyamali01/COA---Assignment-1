#include <bits/stdc++.h>
using namespace std;

// Function for matrix multiplication
vector<vector<int> >  foo(vector<vector<int> >  M1, vector<vector<int> >  M2, int n) {
    vector<vector<int> >  ans(n, vector<int>(n, 0)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                ans[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    return ans;
}

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed the random number generator
    
    int n = 4;  // Size of the matrices
    vector<vector<int> >  M1(n, vector<int>(n));
    vector<vector<int> >  M2(n, vector<int>(n));

    // Initialize matrices with random values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M1[i][j] = rand() % 10;  // Random value between 0 and 9
            M2[i][j] = rand() % 10;  // Random value between 0 and 9
        }
    }

    // Perform matrix multiplication
    vector<vector<int> >  y = foo(M1, M2, n);

    // Print matrices
    cout << "Matrix M1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix M2:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << y[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
