#include<bits/stdc++.h>
using namespace std;

void mergeSort(int* arr, int low, int high){
    if(low > high) return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
}

long long getInversions(long long *arr, int n){
    long long ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]) ans++;
        }
    }
    return ans;
}

int main(){

    return 0;
}