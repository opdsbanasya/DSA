#include<bits/stdc++.h>

using namespace std;

int calculatePower(int a, int n){
    if(n == 0) return 1;

    int power = a * calculatePower(a, n-1);

    return power;
}

int main(){
    int a, n;
    cout<<"Enter the a and n: ";
    cin>>a>>n;

    int power = calculatePower(a, n);
    cout<<power;
    return 0;
}