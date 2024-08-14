#include<iostream>

using namespace std;

int maxNum(int arr[], int size){
    int max = INT16_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int minNum(int arr[], int size){
    int min = INT16_MAX;
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[] = {2,5,89,5,86,27,-25,5,-6,0};
    int size = 10;
    cout<<"Enter the elements:"<<endl;
    
    cout<<"The Min Num : "<<minNum(arr, size)<<endl;
    cout<<"The Max Num : "<<maxNum(arr, size)<<endl;

    return 0;
}