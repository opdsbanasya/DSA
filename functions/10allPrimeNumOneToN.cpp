#include<iostream>

using namespace std;

bool primeOrNot(int number){
    for(int i=2; i<number; i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the Num"<<endl;
    cin>>num;
    
    for(int i = 2; i<= num; i++){
        bool isPrime = primeOrNot(i);
        if(isPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}