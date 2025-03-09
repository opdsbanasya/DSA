#include<bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int> &nums){
    int i = 0; 
    int j = 0;

    while(j < nums.size()){
        if(nums[i] == 0){
            if(nums[j] == 0) j++;
            else swap(nums[i++], nums[j]);
        } else i++, j++;

    }
}

int main(){
    // vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {1};

    moveZeroes(nums);

    for(auto num:nums){
        cout<<num<<" ";
    }
    return 0;
}