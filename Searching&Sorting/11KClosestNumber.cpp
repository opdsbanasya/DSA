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

    for(int j = l; j<h+1; j++){
        cout<<nums[j]<<" "<<endl;
        ans.push_back(nums[j]);
    }

    printlg(ans);
    return ans;
}

int firstOccurence(vector<int> nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end - start)/2;

    int ans = end;
    while(start<=end){
        if(nums[mid] >= target){
            ans = mid;
            end = mid - 1;
        } 
        else start = mid + 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

vector<int> kClosestBS(vector<int> nums, int k, int x) {
    sort(nums.begin(), nums.end());
    int h = firstOccurence(nums, x);
    int l = h-1;

    while(k--){
        cout<<"k = "<<k<<" l = "<<l<<" h = "<<h<<endl;
        cout<<"nums[l] = "<<nums[l]<<" nums[h] = "<<nums[h]<<endl<<x-nums[l]<<" > "<<nums[h]-x<<endl<<endl;
        if(l<0) h++;
        else if(h>=nums.size()) l--;
        else if(x-nums[l] > nums[h]-x) h++;
        else l--;
        
    }
    vector<int> ans;
    for(int j = l+1; j<h; j++){
        ans.push_back(nums[j]);
    }   
    
    printlg(ans);
    return ans;
} 

int main() {
    // vector<int> nums{10,22,25,35,40,49,57,58,68};
    vector<int> nums{1,1,2,3,4,5};
    int k = 4;
    int x = -1;
    // vector<int> kClosestNums = kClosest(nums, k, x);
    // printlg(kClosestNums);

    vector<int> kClosestNumsBS = kClosestBS(nums, k, x);
    printlg(kClosestNumsBS);
    
    return 0;
}