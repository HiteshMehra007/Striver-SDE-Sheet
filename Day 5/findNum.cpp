#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    int n = A.size();
    vector<int> map(n+1,0);
    
    for(int no: A){
        map[no]++;
    }
    
    int a,b;
    for(int i=1; i<n+1; i++){
        if(map[i] == 0) b = i;
        if(map[i] > 1) a = i;
    }
    
    return {a,b};
}

int main(){
    
    return 0;
}