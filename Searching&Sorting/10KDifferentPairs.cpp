#include <bits/stdc++.h>
#include <utility>
#include <set>

using namespace std;

int findPairs(int nums[], int size, int k) {
    int i = 0, j = 1;
    set<pair<int, int>> ans;
    sort(nums, nums + size);

    while (j < size) {
        int diff = nums[j] - nums[i];
        if (diff == k) {
            ans.insert({nums[i], nums[j]});
            i++, j++;
        } else if (diff < k) {
            j++;
        } else {
            i++;
        }
        if (i == j) {
            j++;
        }
    }

    return ans.size();
}

int binarySearch(int nums[],int start, int size, int x){
    int end = size - 1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(nums[mid] == x) return mid;
        else if(nums[mid] > x) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}
int findPairsBS(int nums[], int size, int k) {
    set<pair<int, int>> ans;
    sort(nums, nums + size);
    int i = 0;

    while(i<size){
        if(binarySearch(nums, i+1, size, nums[i] + k) != -1){
            ans.insert({nums[i], nums[i]+k});
            cout<<"nums[i] = "<<nums[i]<<", nums[i] + k = "<<nums[i]+k<<endl;
        }
        i++;
    }

    return ans.size();
}

int main() {
    int nums[] = {3,1,4,1,5};
    int k = 2;
    int size = sizeof(nums) / sizeof(nums[0]);
    // int numberOfPairs = findPairs(nums, size, k);
    int numberOfPairsBS = findPairsBS(nums, size, k);
    // cout << numberOfPairs << endl;
    cout << numberOfPairsBS << endl;
    return 0;
}