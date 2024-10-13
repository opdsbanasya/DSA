#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int binarySearch(vector<int> nums, int start, int end , int target){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid]== target) return mid;
        else if(nums[mid] > target) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int exponentialSearch(vector<int> nums, int target){
    if(nums[0] == target) return 0;

    int i = 1;

    while(i<nums.size() && target >= nums[i]){
        i = i * 2;
    }

    return binarySearch(nums, i/2, min(i, static_cast<int>(nums.size() - 1)), target);
}

int main(){
    vector<int> arr {1,3,5,7,11,13,17,23,29,31,37,41,43,47};
    int target = 13;

    int ans = exponentialSearch(arr, target);
    cout<<ans<<endl;
    return 0;
}