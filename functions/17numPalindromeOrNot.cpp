#include<iostream>

using namespace std;

bool checkPalindrome(int x){
    int ans = 0;
    int num = x;
    while(x>0){
        ans = ans*10 + x%10;
        x /= 10;
    }
    if(ans<=INT32_MIN || ans>INT32_MAX) return false; 
    if(ans == num) return true;
    return false;
}

int main(){
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;

    bool isPalindrome = checkPalindrome(n);
    if(isPalindrome) cout<<"Number is palindrome";
    else cout<<"Number is not palindrome";
    return 0;
}