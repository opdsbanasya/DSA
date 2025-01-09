#include<iostream>

using namespace std;

bool isMatched(string str, string str2){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] != str2[i]) return false;
        else i++;
    }

    return true;
}

// problem: if both strings are same but written in different cases, isMatched function return false due to because inside the function string chars are matched by ASCII values and both lower and upper cases have different ASCII values.
// To resolve this problem need to convert both string into simlar case before passing.

int main(){
    string str;
    cout<<"Enter string 1: ";
    getline(cin, str);
    string str2;
    cout<<"Enter string 2: ";
    getline(cin, str2);

    if(isMatched(str, str2)) cout<<"Matched"<<endl;
    else cout<<"Not matched"<<endl;

    return 0;
}