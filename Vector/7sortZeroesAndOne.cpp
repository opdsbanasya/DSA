#include<iostream>
#include<vector>

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
            int temp = arr[start];
            arr[start] = arr[i];
            arr[i] = temp;
            i++;
            start++;
        }
        if(arr[i] == 1){
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
        }
    }
    

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}