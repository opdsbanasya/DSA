#include<bits/stdc++.h>

using namespace std;

void checkSorted(vector<int>& nums, int i, bool& isSorted){
    if(i > nums.size()-1){
        isSorted = true;
        return;
    };
    if((i+1) < nums.size() && nums[i] > nums[i+1]){
        isSorted = false;
        return;
    }

    checkSorted(nums, i+1, isSorted);

}

int main(){
    vector<int> nums = {-2, 0, 6};

    bool isSorted;

    checkSorted(nums, 0, isSorted);

    if(isSorted){
        cout<<"Sorted"<<endl;
    } else {
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}