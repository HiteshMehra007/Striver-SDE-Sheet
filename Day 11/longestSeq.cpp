#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> s;
        for(int no: nums){
            s.insert(no);
        }

        int cs = 1;
        int mx = 1;
        for(int no: s){
            if(s.find(no-1) != s.end()) continue;
            int i = 1;
            while(s.find(no+i) != s.end()){
                cs++;
                i++;
            }
            mx = max(mx, cs);
            cs = 1;
        }
        return mx;
}

int main(){
    
    return 0;
}