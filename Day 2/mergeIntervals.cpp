#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    int n = intervals.size();
    ans.push_back(intervals[0]);

    int j=0;
    for(int i=1; i<n; i++){
        vector<int> interval = intervals[i];
        if(interval[0] >= ans[j][0] && interval[0] <= ans[j][1]){
            if(interval[1] > ans[j][1]) ans[j][1] = interval[1];
        }
        else {
            ans.push_back(interval);
            j++;
        }
    }

    return ans;
}

int main(){
    
    return 0;
}