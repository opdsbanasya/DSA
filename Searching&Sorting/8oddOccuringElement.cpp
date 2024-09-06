#include<iostream>
#include<vector>

using namespace std;

int oddOccuring(vector<int> nums){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(start == end) return start;

        // ? 2 cases -> mid-even || mid-odd
        if(mid%2 == 0){
            if(nums[mid] == nums[mid+1]) start = mid + 2;
            else end = mid;
        } else {
            if(nums[mid] == nums[mid - 1]) start = mid + 1;
            else end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    vector<int> nums{1,4,4,5,5,8,8,5,5,6,6,9,9};

    int ans = oddOccuring(nums);
    if(ans == -1){
        cout<<"not found"<<endl;
    } else {
        cout<<"found at index "<<ans<<" value is "<<nums[ans]<<endl;
    }

    return 0;
}