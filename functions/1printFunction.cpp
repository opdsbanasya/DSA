#include<iostream>

using namespace std;

void printName(){
    int n;
    cout<< "Enter a num"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Hello"<<endl;
    }
}

int main(){
    printName();
    return 0;
}