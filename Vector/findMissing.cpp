#include<iostream>
#include<vector>

using namespace std;

int findMultipleMissingNumsInSoerted(vector<int> num){
    // visited method
    for(int i=0; i<num.size(); i++){
        int index = abs(num[i]);
        if(index > num.size() && num[index-1]>0){
            cout<<"index = "<<index<<" ,";
            cout<<num[index-1]<<endl;
            num[index-1] *= -1;
        }
    }
    for(int i=0; i<num.size(); i++){
        if(num[i]>0){
            cout<<i+1<<" ";
        }
    }
}

int findMissingSum(vector<int> &nums){
    int len = nums.size();

    // Sum method
    int sumOfAll =  (len * (len + 1)) / 2;
    int sumOfArray = 0;
    for(auto i:nums){
            sumOfArray += i;
    }
    return sumOfAll - sumOfArray;
}

int findMissingXor(vector<int> &nums){
    int len = nums.size();

    int xorOfAll = 0, xorOfArray=0;
    for(int i = 0; i<len; i++){
        xorOfAll ^= i+1;
        xorOfArray ^= nums[i];
    }
        
    return xorOfAll ^ xorOfArray;
}

int main(){

    vector<int> nums{9,6,4,2,3,5,7,0,1};

    // cout<<findMissingSum(nums);
    cout<<findMissingXor(nums);

    return 0;
}