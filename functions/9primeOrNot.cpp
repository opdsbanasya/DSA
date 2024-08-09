#include<iostream>

using namespace std;

bool primeOrNot(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter the Num"<<endl;
    cin>>num;

    if(num == 1){
        cout<<"The number is nor Prime neither Composite"<< endl;
    } else if(primeOrNot(num)){
        cout<<"The number is Composite"<< endl;
    } else{
        cout<<"The number is Prime"<<endl;
    }
    return 0;
}