#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector<int> num){
    // positioning method
    while(num[0] != num[num[0]]){
        swap(num[0], num[num[0]]);
    }
    return num[0];
}

int visitedMethod(vector<int> &num){
    int ans = -1;
    for(int i=0; i<num.size(); i++){
        int index = abs(num[i]);
        if(num[index]<0){
            ans = index;
            break;
        }
        num[index] *= -1;
    }
    return ans;
}

// sorting method
int fDupl(vector<int> &nums){
    sort(nums.begin(), nums.end());

    int i = 0;
    while(i+1 < nums.size()){
        if(nums[i] == nums[i+1]) return nums[i];
        i++;
    }
    return -1;
}

int main(){
    vector<int> num{2,4,1,3,1};
    int dupEle = findDuplicate(num);
    cout<<dupEle<<endl;
    int dupElem = fDupl(num);
    cout<<dupElem<<endl;

    return 0;
}