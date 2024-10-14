#include<bits/stdc++.h>

using namespace std;

bool isPosibleSolution(int arr[], int n, int m, int sol){
    if(arr[0]>sol) return false;

    int s = 1;
    int numOfPages = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>sol) return false;
        else if(numOfPages + arr[i]>sol){
            s++;
            numOfPages = arr[i];
            if(s>m) return false;
        } 
        else numOfPages += arr[i];
    }
}

int bookAllocation(int arr[], int n, int m){
    if(m>n) return -1;

    int ans = -1;
    int start = 0;
    int end = accumulate(arr, arr+n, 0);
    
    while(start <= end){
        int mid = start + (end-start)/2;
        if(isPosibleSolution(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main(){
    int arr[] = {15, 17, 20};
    int n = 3;
    int m = 5;
    int sol = bookAllocation(arr, n, m);
    cout<<sol<<endl;
    return 0;
}