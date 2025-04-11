#include<bits/stdc++.h>

using namespace std;

bool isPosiblePartition(int arr[], int n, int k, long long sol){
    int s = 1;
    long long lengthOfBoards = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>sol) return false;
        else if(lengthOfBoards + arr[i]>sol){
            s++;
            lengthOfBoards = arr[i];
            if(s>k) return false;
        } 
        else lengthOfBoards += arr[i];
    }
    return true;
}

long long paintersPartition(int arr[], int n, int k){
    long long ans = -1;
    long long start = 0;
    long long end = accumulate(arr, arr+n, 0);
    
    while(start <= end){
        long long mid = start + (end-start)/2;
        if(isPosiblePartition(arr, n, k, mid)){
            ans = mid;
            end = mid-1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    long long sol = paintersPartition(arr, n, k);
    cout<<sol<<endl;
    return 0;
}