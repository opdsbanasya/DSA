#include<iostream>
#include<vector>

using namespace std;

int firstOccurence(vector<int> nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;

    int ans = -1;
    while(start<=end){
        if(nums[mid] == target){
            ans = mid;
            end = mid - 1;
        } else if(target < nums[mid]){
            end = mid-1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurence(vector<int> nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;

    int ans = -1;
    while(start<=end){
        if(nums[mid] == target){
            ans = mid;
            start = mid + 1;
        } else if(target < nums[mid]){
            end = mid-1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    vector<int> nums{1,4,4,4,4,9,10,15};

    int key;
    cout<<"Enter the target"<<endl;
    cin>> key;

    int first = firstOccurence(nums, key);
    int second = lastOccurence(nums, key);
    cout<<"first occurence "<< first<<endl;
    cout<<"second occurence "<<second<<endl;
    cout<<"Total occurence "<<second - first + 1<<endl;
    return 0;
}