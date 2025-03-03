#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> &nums){
    int i = 0;
    int j = 0;
    int length = nums.size();
    while(i<length){
        if((i+1 < length) && (nums[i] != nums[i+1])){
            nums[j++] = nums[i];
        }
        i++;
    }
    nums[j++] = nums[--i];

    return j;
}

int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout<<removeDuplicates(nums)<<endl;
    for(auto i:nums){
        cout<<i<<" ";
    }
    return 0;
}