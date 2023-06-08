#include<bits/stdc++.h>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int si = 0;
        int sj = matrix[0].size() - 1;
        while(si < matrix.size() && sj > -1){
            if(matrix[si][sj] == target){
                return true;
            }
            else if(matrix[si][sj] < target){
                si++;
            }
            else{
                sj--;
            }
        }
        return false;
    }

int main(){
    
    return 0;
}