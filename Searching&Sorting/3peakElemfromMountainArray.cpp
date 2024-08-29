#include<iostream>
#include<vector>

using namespace std;

int findPeakElem(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start<end){
        if(arr[mid] < arr[mid + 1]){
            // right search
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    vector<int> arr{0,10,5,2};

    int peak = findPeakElem(arr);
    cout<<"The peak element "<<arr[peak]<<" at the index : "<<peak<<endl;
    return 0;
}