#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> nums, int key, int start, int end){
	int mid = start + (end-start)/2;

	if(nums[mid] == key) return mid;

	if(nums[mid] > key) return binarySearch(nums, key, start, mid-1);

	if(nums[mid] < key) return binarySearch(nums, key, mid + 1, end);

    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11};
    int key = 23;
    cout<<binarySearch(nums, key, 0, nums.size()-1);
    return 0;
}
