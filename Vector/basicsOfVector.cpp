#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;

    cout<<"Size :"<<arr.size()<<endl;
    cout<<"Capacity :"<<arr.capacity()<<endl;

    // insertion
    arr.push_back(5);
    arr.push_back(6);

    // printing
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // deletion
    arr.pop_back();

    // printing
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // user input
    int n;
    cout<<"Enter the size of vector ";
    cin>>n;
    vector<int> brr(n, 8);

    // printing
    for(int i=0; i<brr.size(); i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    // direct initialization
    vector<int> crr{1,2,3,4,5,6};

    // printing
    for(int i=0; i<crr.size(); i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"Vector crr is empty or not : "<<crr.empty()<<endl;
    return 0;
}