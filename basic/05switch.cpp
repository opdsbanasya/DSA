#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a num"<<endl;
    cin>>n;

    switch(n){
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        default:
            cout<<"other";

    }
    return 0;
}