#include<bits/stdc++.h>

using namespace std;
int searchInsert(vector<int> arr, int target){
    int start = 0;
    int end = arr.size();
    int mid = start + (end-start) / 2;
    int ans[2] = {-1,-1};

    while(start<=end){
        if(arr[mid] == target){
            cout<<"mid return at : "<<mid<<endl;
            ans[0] = mid;
            break;
        }
        if(target<arr[mid+1]) {
            cout<<"place sholud be "<<mid + 1<<endl;
            ans[1] = mid + 1;
        }
        if(arr[mid]< target){
            cout<<"start = "<<start<<endl;
            start = mid + 1;
        } else {
            cout<<"end = "<<end<<endl;
            end = mid - 1;
        }
        
        mid = start + (end-start) / 2;
    }
    cout<<"return ans"<<endl;
    return ans;
}
int main(){
    vector<int> arr{1,2,5,6,7,8};

    int target = 3;
    cout<<"calling"<<endl;

    int result[2] = searchInsert(arr, target);
    
    if(result[0]>=0){
        cout<<"Element found at the "<<result[0]<<" and value is "<<arr[result[0]]<<endl;
    } else if(result[1]>= 0){
        cout<<"Element should be inserted at "<<result[1]<<endl;
    } else {
        cout<<"not found"<<endl;
    }
    return 0;
}