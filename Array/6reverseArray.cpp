#include<iostream>

using namespace std;

int reverseArr(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;    
    }
}
int main(){
    int arr[] = {5,3,6,9,45,56,4,6};
    int size = 8;

    reverseArr(arr, size);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}