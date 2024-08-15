#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int> >  foo(vector<vector <int> >  M1, vector<vector<int> >  M2,int n){
    vector<vector<int> >  ans (n, vector<int>(n,0)); 
    int x;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++)
            ans[i][j] += M1[i][k] * M2[k][j];
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {4, 5, 6, 7, 3};
    srand(static_cast<unsigned>(time(0))); //seeding random number generator
    int n = nums.size();

    for (int i=0; i<n; i++){
        vector<vector <int> >  M1(nums[i],vector<int>(nums[i]));
        vector<vector <int> >  M2(nums[i],vector<int>(nums[i]));
        int p = nums[i];

        //initializing the M1 and M2 matrices
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < p; j++) {
                M1[i][j] = rand() % 10;  // Random value between 0 and 9
                M2[i][j] = rand() % 10;  // Random value between 0 and 9
            }
        }

        //initializing the resultant matrix
        vector<vector<int> >  y = foo(M1,M2,p);

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