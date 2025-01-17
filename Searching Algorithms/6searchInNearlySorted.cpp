#include<iostream>
#include<vector>

using namespace std;
// * In case of sorted array a element should be at ith index if that element can be at (i-1)th, ith, or (i+1)th position in a nearly sorted array.

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(arr[mid] == target) {
            return mid; 
        }
        if(mid+1<=end && arr[mid+1] == target) {
            return mid+1; 
        }
        if(mid-1>start && arr[mid-1] == target) {
            return mid-1; 
        }
        if(arr[mid]<target){
            start = mid + 2;
        } else {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    vector<int> arr{5,2,8,6,15,11,20,18,50,30,52,51,70,60,99,75};
    int target = 5;

    int ans = binarySearch(arr, target);
    if(ans == -1){
        cout<<"Not found"<<endl;
    } else {
        cout<<"Element found at the index "<<ans<<" and the value is "<<arr[ans]<<endl;
    }
    return 0;
}