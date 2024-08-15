#include <bits/stdc++.h>
#include <vector>
using namespace std;

//every element in the matrix is a double
vector<vector<double> >  foo(vector<vector <double> >  M1, vector<vector<double> >  M2,int n){
    vector<vector<double> >  ans (n, vector<double>(n,0.0)); 
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++)
            ans[i][j] += M1[i][k] * M2[k][j];
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {64, 128, 256, 512, 1024};
    srand(static_cast<unsigned>(time(0))); //seeding random number generator
    int n = nums.size();

    for (int i=0; i<n; i++){
        vector<vector <double> >  M1(nums[i],vector<double>(nums[i]));
        vector<vector <double> >  M2(nums[i],vector<double>(nums[i]));
        int p = nums[i];

        //initializing the M1 and M2 matrices
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < p; j++) {
                M1[i][j] = static_cast<double>(RAND_MAX) / RAND_MAX * 9.0 + 1.0;
                M2[i][j] = static_cast<double>(rand()) / RAND_MAX * 9.0 + 1.0;
            }
        }

        //initializing the resultant matrix
        vector<vector<double> >  y = foo(M1,M2,p);

        for (int i=0; i<p; i++){
            for (int j=0; j<p; j++){
                cout << M1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i=0; i<p; i++){
            for (int j=0; j<p; j++){
                cout << M2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i=0; i<p; i++){
            for (int j=0; j<p; j++){
                cout << y[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;



    }

    cout << endl;

}