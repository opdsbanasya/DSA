#include<iostream>

using namespace std;

int extremePrint(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start<=end){
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;    
    }
    
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int size = 8;

    extremePrint(arr, size);
    return 0;
}