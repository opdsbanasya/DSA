#include<iostream>
#include<cmath>

using namespace std;

int decimalToBinary(int n){
    int i = 1;
    int binaryNumber = 0;
    while(n>0){
        int bit = n%2;
        // binaryNumber = bit*pow(10, i++) + binaryNumber;
        binaryNumber = bit*i + binaryNumber;
        i *= 10;
        n = n/2;
    }
    return binaryNumber;
}
int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>>n;

    int binary = decimalToBinary(n);
    cout<<binary<<endl;  
    return 0;
}