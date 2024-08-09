#include<iostream>

using namespace std;

void printPrimeNum(int n){
    int primeNum;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%j == 0){
                break;
            }
            primeNum = i;
        }
        cout<<primeNum<<" ";
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