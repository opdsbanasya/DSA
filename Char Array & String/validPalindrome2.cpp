#include<bits/stdc++.h>

using namespace std;

bool checkPalindrome(string str, int i, int j){
    while(i<=j){
        if(str[i] != str[j]) return false;
        else i++, j--;
    }
    return true;
}
bool validPalindrome(string str){
    int i = 0, j = str.length()-1;

    while(i<=j){
        if(str[i] != str[j]){
            // ya to i ko remove ya j ko remove
            return checkPalindrome(str, i+1, j) || checkPalindrome(str, i, j-1);
        } else {
            i++, j--;
        }
    }
    return true;
}
    
int main(){
    string str = "eeccccbebaeeabebccceea";

    cout<<str<<endl;
    cout<<validPalindrome(str)<<endl;

    return 0;
}