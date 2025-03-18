#include<bits/stdc++.h>

using namespace std;

int digits(int &num){
    if(num==0) return 0;

    int dig = num % 10;
    num = num/10;
    
    digits(num);
    cout<<dig<<" ";
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    digits(num);
    return 0;
}