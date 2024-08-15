#include<iostream>
#include<vector>

using namespace std;

void twoSum(vector<int> arr, int key){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == key){
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<key<<endl;
                }
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<arr.size();i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter sum key"<<endl;
    cin>>key;

    twoSum(arr, key);

    return 0;
}