#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);

        for(int i=0; i<numRows; i++){
            // total number of elements in i-th row is (i+1)
            pascal[i].resize(i+1);

            // first and last element of row is 1
            pascal[i][0] = pascal[i][i] = 1;

            // rest elements
            for(int j=1; j<i; j++){
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }

        return pascal;
    }

int main(){
    
    return 0;
}