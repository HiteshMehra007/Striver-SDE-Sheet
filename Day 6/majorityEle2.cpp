#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,pair<int,int>> m;
        vector<int> ans;
        for(int no: nums){
            m[no].first++;
            if(m.find(no) == m.end()) m[no].second = 0;
            if(m[no].first > nums.size()/3 && m[no].second==0){
                ans.push_back(no);
                m[no].second = 1;
            }
        }
        return ans;
}

int main(){
    
    return 0;
}