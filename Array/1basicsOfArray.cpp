#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,5,8,6};

    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<endl<<endl;

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