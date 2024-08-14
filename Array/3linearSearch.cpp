#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main() {
    int arr[] = {1,5,8,6,5,38,8,6};
    int size = 8;
    int key;
    cout<<"Enter the number to be searched: "<<endl;
    cin>>key;

    if(linearSearch(arr, size, key)){
        cout<<"Key is present"<<endl;
    } else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}