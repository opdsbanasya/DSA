#include<bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int> nums, int val){
    int i = 0;
    int index = 0;
    int size = nums.size();
    while(i<size){
        if(nums[index] == val){
            swap(nums[index], nums[i]);
        }
        if(nums[index] != val) index++;
        i++;
    }

    return index;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};

    cout<<"Elements after removing duplicates: "<<removeDuplicates(nums,2);

    return 0;
}