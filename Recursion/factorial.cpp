#include<bits/stdc++.h>

using namespace std;

int factorial(int n){
    if(n == 0 || n == 1) return 1;

    int fact = n * factorial(n-1);

    return fact;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int fact = factorial(n);
    cout<<fact<<endl;
    return 0;
}