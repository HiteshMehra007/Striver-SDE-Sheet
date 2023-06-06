#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int zeros = 0,
            ones = 0,
            twos = 0,
            n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
            else twos++;
        }

        int j=0;
        while(zeros--){
            nums[j++] = 0;
        }

        while(ones--){
            nums[j++] = 1;
        }

        while(twos--){
            nums[j++] = 2;
        }
    }

int main(){
    
    return 0;
}