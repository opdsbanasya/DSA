#include<iostream>

using namespace std;

bool primeOrNot(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the Num"<<endl;
    cin>>num;
    if(num == 1 || num == 0){
        cout<< "It is a not prime or not composite";
        return 0;
    }
    if(primeOrNot(num)){
        cout<<"The number is Prime"<<endl;
    } else{
        cout<<"The number is Composite"<< endl;
    }
    return 0;
}