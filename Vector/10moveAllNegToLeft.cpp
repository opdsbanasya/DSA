#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortColor(vector<int> nums){
    int l=0,h=nums.size()-1;
    while(l<h){
        if(nums[l]<0){
            l++;
        } else if(nums[h]>0){
            h--;
        } else {
            swap(nums[l], nums[h]);
        }
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> nums{2,5,-3,6,-4};
    // vector<int> nums{2,0,1};
    sortColor(nums);
    
    return 0;
}