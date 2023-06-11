#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans;
        for(int no: nums){
            m[no]++;
            if(m[no] > nums.size()/2){
                ans = no;
                break;
            }
        }

        return ans;
}

int main(){
    
    return 0;
}