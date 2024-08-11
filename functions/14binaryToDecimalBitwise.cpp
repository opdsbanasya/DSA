#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(int n){
    int i = 1;
    int decimal = 0;
    while(n>0){
        int bit = n&1;
        // decimal = bit*pow(10, i++) + decimal;
        decimal = bit*i + decimal;
        i *= 2;
        n = n/10;
    }
    return decimal;
}
int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>>n;

    int binary = binaryToDecimal(n);
    cout<<binary<<endl;  
    return 0;
}