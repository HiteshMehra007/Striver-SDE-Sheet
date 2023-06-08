#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans;
        for(int n: nums){
            if(m.find(n) != m.end()) ans = n;
            else m[n]++;
        }

        return ans;
}

int main(){
    
    return 0;
}