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

int main() {
    int nums[] = {1, 1, 1, 1, 1};
    int k = 0;
    int size = sizeof(nums) / sizeof(nums[0]);
    int numberOfPairs = findPairs(nums, size, k);
    cout << numberOfPairs << endl;
    return 0;
}