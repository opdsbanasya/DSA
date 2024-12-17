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

double sumOfHPSeries(int n, int a, int d){
    return 1/d * log((2*a + (2*n - 1)*d)/(2*a - d));
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

    // todo 3: Sum of a Series (1 + 1/2 + 1/3 + ... + 1/n)
    // int n;
    // cout<<"Enter the number of terms of series :"<<endl<<"1 + 1/2 + 1/3 + ... + 1/n"<<endl;
    // cin>>n;
    // int a = 1, d = 1;
    // cout<< "The sum of series for "<<n<<" terms: "<<sumOfHPSeries(n, a, d)<<endl;














    return 0;
}