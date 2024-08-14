#include<iostream>

using namespace std;

int main(){
    int arr[50];

    cout<<"Enter the<< element"<<endl;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<2*arr[i]<<" ";
    }
    return 0;
}