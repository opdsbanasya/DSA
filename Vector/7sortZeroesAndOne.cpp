#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
   
   int start = 0;
    int end = arr.size()-1;
    int i = 0;
    
    while(i !=end){
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        if(arr[i] == 1){
            swap(arr[i], arr[end]);
            end--;
        }
    }
    

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}