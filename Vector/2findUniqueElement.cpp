#include<iostream>
#include<vector>

using namespace std;

int uniqueElement(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    cout<<"The unique element is: "<<uniqueElement(arr);

    return 0;
}