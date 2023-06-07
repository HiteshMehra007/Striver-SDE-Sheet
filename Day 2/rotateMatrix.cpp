#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            int s = 0;
            int e = n-1;
            while(s<e){
                swap(matrix[s][i],matrix[e][i]);
                s++;
                e--;
            }
        }

        // transpose
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

int main(){
    
    return 0;
}