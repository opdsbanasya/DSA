#include<bits/stdc++.h>

using namespace std;

void maxNumber(vector<int> &nums, int i, int& max){
    if( i > nums.size()-1) return;

    if(max < nums[i]) max = nums[i];
    maxNumber(nums, i+1, max);
}

void minNumber(vector<int>& nums, int i, int& min){
    if(i > nums.size()-1) return;

    if(min > nums[i]) min = nums[i];

    minNumber(nums, i+1, min);
} 
int main(){
    vector<int> nums = {12, 13, 8, 17, 39, 18, 26};

    int max = INT_MIN;
    int min = INT_MAX;

    maxNumber(nums, 0, max);
    minNumber(nums, 0, min);
    cout<<"max: "<<max<<", min: "<<min<<endl;
    return 0;
}