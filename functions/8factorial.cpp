#include<iostream>

using namespace std;

int factorial(int num){
    
    if(num == 0){
        return 1;
    } else{
        int fact = 1;
        for(int i=1; i<=num; i++){
            fact = fact * i;
        }
        return fact;
    }
}
int main(){
    int num;
    cout<<"Enter the Num"<<endl;
    cin>>num;

    cout<< "The factorial of num "<< factorial(num);
    return 0;
}