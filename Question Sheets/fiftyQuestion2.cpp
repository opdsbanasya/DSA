#include<bits/stdc++.h>

using namespace std;

int sumOfDigit(int num){
    int sum = 0;
    while(num > 0){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

void multiplicationTable( int num , int start, int end){
    if(start>end) cout<<"start must be less than end"<<endl;
    else{
        cout<<"Multiplication table is"<<endl;
        for(int i = start; i<=end; i++ ){
            cout<<num*i<<" ";
        }
    }
}

int main(){
    // todo 1: Sum of digits
    // int num = 5662;
    // cout<<sumOfDigit(num)<<endl;

    // todo 2: Generating a Multiplication Table for a Range
    // int num, start, end;
    // cout<<"Enter the number, start and end"<<endl;
    // cin>>num>>start>>end;
    // multiplicationTable(num, start, end);

    // todo 3: 














    return 0;
}