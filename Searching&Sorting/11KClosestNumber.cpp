#include <bits/stdc++.h>
#include <utility>
#include <set>

using namespace std;

void printlg(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

vector<int> kClosest(vector<int> nums, int k, int x) {
    sort(nums.begin(), nums.end());
    vector<int> ans;

    int l = 0, h = nums.size()-1;
    int i = 0;

    while(i<nums.size()-k){
        cout<<"i = "<<i<<" l = "<<l<<" h = "<<h<<endl;
        cout<<"nums[l] = "<<nums[l]<<" nums[h] = "<<nums[h]<<endl<<x-nums[l]<<" > "<<nums[h]-x<<endl<<endl;

        if(x-nums[l] > nums[h]-x) {
            l++;
        }
        else {
            h--;
        }
        i++;
    }

    for(int i = l; i<h+1; i++){
        cout<<nums[i]<<" "<<endl;
        ans.push_back(nums[i]);
    }

    printlg(ans);
    return ans;
}

int main() {
    // vector<int> nums{10,22,25,35,40,49,57,58,68};
    vector<int> nums{1,1,2,3,4,5};
    int k = 4;
    int x = -1;
    vector<int> kClosestNums = kClosest(nums, k, x);
    printlg(kClosestNums);
    
    return 0;
}