#include<iostream>

using namespace std;

int divide(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int ans = 0;
    cout<<"start = "<<start<<", end = "<<end<<", mid = "<<mid<<", ans = "<<ans<<endl;

    while(start <= end){
        if(abs(mid*divisor) == abs(dividend)) {
            ans = mid;
            cout<<"perfert:  ans = "<<ans<<endl;
            break;
        }
        if(abs(mid*divisor) > abs(dividend)) {
            end = mid-1;
            cout<<"left search end = "<<end<<endl;
        } else {
            ans = mid;
            cout<<"ans = "<<ans<<endl;
            start = mid +1;
            cout<<"right search start = "<<start<<endl;
        }
        mid = start + (end - start) / 2;
    }
    if((dividend>=0 && divisor>0) || (dividend<0 && divisor<0)){
        return ans;
    } else {
        return -ans;
    }
}
int main(){
    int dividend;
    int divisor;
    cout<<"Enter the Dividend & divisor"<<endl;
    cin>>dividend>>divisor;

    int ans = 0;
    if(divisor == 0) {
        cout<<"Divisor should be not equal to 0"<<endl;
    }

    else {
        ans = divide(dividend, divisor);
        cout<<"The answer of "<<dividend<<" / "<<divisor<<" = "<<ans<<endl;
    }
    return 0;
}