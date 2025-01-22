#include<bits/stdc++.h>

using namespace std;

string removeAllOccurenceOfSubstr(string str, string part){
    while(str.find(part) != string::npos){
        str.erase(str.find(part) , part.length());
    }
    return str;
}
    
int main(){
    string str = "daabcbaabcbc";
    string part = "abc";

    cout<<str<<endl;
    string rmstr = removeAllOccurenceOfSubstr(str, part);
    cout<<rmstr<<endl;

    return 0;
}