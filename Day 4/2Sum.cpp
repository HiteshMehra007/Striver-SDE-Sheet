#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,pair<int,int>> m;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int no = nums[i];
            if(m.find(target-no) != m.end()){
                ans.push_back(i);
                ans.push_back(m[target-no].second);
                return ans;
            }
            else{
                m[no].first++;
                m[no].second = i;
            }
        }
        return ans;
}

int main(){
    
    return 0;
}