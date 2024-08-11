#include<iostream>

using namespace std;

void printPrimeNum(int n){
    int primeNum;
    for(int i=2; i<=n; i++){
        bool isPrime = true;
        for(int j=2; j<=n; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<primeNum<<" ";
        }
    }
}

int main(){
    int num;
    cout<<"Enter the Num"<<endl;
    cin>>num;

    cout<<"All prime number from 1 to "<<num<<endl;
    printPrimeNum(num);
    return 0;
}