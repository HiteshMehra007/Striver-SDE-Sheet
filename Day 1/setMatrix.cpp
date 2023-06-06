#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0) v.push_back(make_pair(i,j));
            }
        }

        for(auto x:v){
            for(int i=0; i<matrix[0].size(); i++){
                matrix[x.first][i] = 0;
            }

            for(int i=0; i<matrix.size(); i++){
                matrix[i][x.second] = 0;
            }
        }
    }

int main(){
    
    return 0;
}