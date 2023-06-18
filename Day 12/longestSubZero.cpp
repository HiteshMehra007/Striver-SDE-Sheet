#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> m;
        int len = 0;
        int csum = 0;
        for(int i=0; i<n; i++){
            csum += A[i];
            if(csum == 0){
                len = max(len, i+1);
            }
            if(m.find(csum-0) != m.end()){
                len = max(len, i-m[csum-0]);
            }
            else{
                m[csum] = i;
            }
        }
        
        return len;
    }

int main(){

    return 0;
}