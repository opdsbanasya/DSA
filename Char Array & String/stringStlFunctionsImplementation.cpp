#include<iostream>

using namespace std;

int getLength(string str){
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

bool isEmpty(string str){
    return str[0] == '\0' ? true : false;
}

string getSubStr(string str, int si, int li){
    string substr = "";

    int length = getLength(str);
    if(li > length) li = length; // if last index is out of range then it set it equal to string length. 
    if(si<0) return "Out of Range"; // if start index is out of range then user got an message about it.

    while(si<li){
        substr += str[si];
        si++;
    }
    return substr;
}

// if user call funtion wothout passing last index the he not getting error and got the right result
string getSubStr(string str, int si){
    return getSubStr(str, si, getLength(str));
}

string doErase(string str, int si, int charCount){
    string erasedStr = "";
    int len = getLength(str);

    while(si<len){
        if(getLength(erasedStr) <= charCount) erasedStr+=str[si];
        str[si] = str[si+charCount];
        si++;
    }

    return erasedStr;
}

// override function if user don't pass char count
string doErase(string str, int si){
    return doErase(str, si, getLength(str));
}

int main(){
    string str = "readme for c++";
    // getline(cin, str);
    cout<<"main: "<<str<<endl;

    // todo: get length
    int len = getLength(str);
    // cout<<"Length: "<<length<<endl;

    // todo: check string is empty
    // cout<<"is string empty? "<<isEmpty(str)<<endl;
    // cout<<"is string empty? "<<str.empty()<<endl;

    // todo: substring
    // string firststr = str.substr(0, 3);
    // string sfirststr = getSubStr(str, 0, 3);
    // cout<<"First str: 1. "<<firststr<<endl<<sfirststr<<endl;

    // todo: erase 
    cout<<"my function: '"<<doErase(str, 6)<<"'"<<endl;
    cout<<"stl function: "<<str.erase(6)<<endl;
    cout<<"After erasing: "<<str<<endl;
    
    return 0;
}