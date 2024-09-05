#include<iostream>

using namespace std;
bool binarySearch(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int end = rows*cols -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex] == target){
            cout<<"Found at "<<rowIndex<<", "<<colIndex<<endl;
            return true;
        }
        if(arr[rowIndex][colIndex] < target){
            start = mid + 1;
        } else {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}
int main(){
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};

    int target;
    cout<<"Enter the target"<<endl;
    cin>>target;

    bool ans = binarySearch(arr, 4, 4, target);

    if(ans){
        cout<<"Found"<<endl;
    } else {
        cout<<"Not Found"<<endl;
    }
    return 0;
}