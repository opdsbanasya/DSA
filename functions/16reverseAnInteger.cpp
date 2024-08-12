#include<iostream>
#include<cmath>

using namespace std;

int reverseInt(int n){
    if(n<=INT64_MIN){
        return 0;
    }
    int ans = 0;
    bool isNeg = false;
    if(n<0){
        isNeg = true;
        n = -n;
    }
    while(n>0){
        if(ans>INT64_MAX/10){
            return 0;
        }
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    return isNeg ? -ans : ans;
}
int main(){
    int n;
    cout<<"Enter an Integer"<<endl;
    cin>>n;

    int reverse = reverseInt(n);
    cout<<reverse;
    return 0;
}