#include<iostream>

using namespace std;

int maxNum(int a, int b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}
int main(){
    int a, b;
    cout<< "Enter a and b"<< endl;
    cin>> a >> b;
    cout<<"Max Num is "<< maxNum(a,b);
    return 0;
}