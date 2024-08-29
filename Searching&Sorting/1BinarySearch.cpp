#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> nums, int target){
    int start = 0;
    int end = nums.size()-1;

    int mid = start + (end - start)/2;

    while(start<=end){
        if(nums[mid] == target){
            return mid;
        }
        if(target < nums[mid]){
            end = mid-1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    vector<int> nums{1,4,5,7,8,9,10,15};

    int key;
    cout<<"Enter the target"<<endl;
    cin>> key;

    int ans = binarySearch(nums, key);
    if(ans == -1){
        cout<<key<<" is not found"<<endl;;
    } else {
        cout<<key<<" is found at index "<<ans<<endl;;
    }

    return 0;
}