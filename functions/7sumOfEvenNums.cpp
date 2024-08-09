#include<iostream>

using namespace std;

int sumOfEven(int n){
    int sum = 0;
    for(int i = 2; i<=n; i=i+2){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter value of N"<<endl;
    cin>>n;

    cout<<"The sum of even nums from 1 to "<< n <<": " << sumOfEven(n)<<endl;
    return 0;
}