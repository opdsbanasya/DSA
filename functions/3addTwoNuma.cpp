#include<iostream>

using namespace std;

int getSum(int a, int b){
    return a+b;
}

int main(){
    int a, b;
    cout<<"Enter two Num"<<endl;
    cin>>a>>b;
    int sum = getSum(a,b);
    cout<<sum;
    return 0;
}