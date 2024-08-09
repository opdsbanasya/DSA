#include<iostream>

using namespace std;

int maxOfNum(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    } else if(num2>num1 && num2>num3){
        return num2;
    } else{
        return num3;
    }
}
int main(){
    int a, b, c;
    cout<< "Enter 3 nums"<< endl;
    cin>>a >>b>>c;
    
    int max = maxOfNum(a, b, c);
    cout<<" Tha max Number is "<<max;
    return 0;
}