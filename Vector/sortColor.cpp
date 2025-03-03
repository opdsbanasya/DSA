#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sortColor(vector<int> nums){
    int l=0, m=0, h=nums.size()-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[l], nums[m]);
            l++;
            m++;
        } else if(nums[m]==1){
            m++;
        } else{
            swap(nums[m], nums[h]); 
            h--;
        }
    }
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int> nums{2,0,2,1,1,0};
    // vector<int> nums{2,0,1};
    sortColor(nums);
    
    return 0;
}