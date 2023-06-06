#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minSoFar = prices[0];
        int n = prices.size();
        for(int i=0; i<n; i++){
            minSoFar = min(prices[i],minSoFar);
            int currProfit = prices[i] - minSoFar;
            maxProfit = max(maxProfit,currProfit);
        }
        return maxProfit;
    }

int main(){
    
    return 0;
}