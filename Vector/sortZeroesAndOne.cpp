#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    // cout<<"Enter size of vector"<<endl;
    // cin>>n;

    vector<int> arr{0,1,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,1};

    // cout<<"Enter the elements"<<endl;
    
    int start = 0;
    int end = arr.size()-1;
    
    while(start < end){
        if(arr[start] == 0){
            start++;
        }
        if(arr[start] == 1){
            swap(arr[start], arr[end]);
            end--;
        }
        
    }
    

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}