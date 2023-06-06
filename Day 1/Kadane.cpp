#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int cs = 0;
        for(int i=0; i<n; i++){
            cs += nums[i];
            mx = max(mx,cs);
            if(cs < 0) cs = 0; 
        }

        return mx;
    }

int main(){
    
    return 0;
}