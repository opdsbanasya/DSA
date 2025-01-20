#include<iostream>
#include <string>

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

//* Substring
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

//* erase
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

//* Find
int findStr(string str, char target, int jump = 0){
    int i = jump;
    int len = getLength(str);
    while(i<getLength(str)){
        if(str[i] == target){
            return i;
        }
        i++;
    }
    return -1;
}

// override function for strings
int findStr(string str, string target){
    int jump = 0;
    int len = getLength(str);
    int lenTarget = getLength(target);
    while(jump < len){
        int firstOcc = findStr(str, target[0], jump);
        if(firstOcc < 0) return firstOcc;

        bool match = true;
        for(int i=0; i<lenTarget; i++){
            if(str[firstOcc] != target[i]){
                match = false;
                break;
            }
            firstOcc++;
        }
        if(match == true) return firstOcc-lenTarget; // here first occurence is increase by length of target inside loop
        jump = jump + firstOcc;
    }

    return -1;
}

//* Replace
void doReplace(string &str, int si, int li, string str2){
    int len = getLength(str);
    int lenRep = getLength(str2);

    for(int i = 0; i<lenRep; i++){
        str[si] = str2[i];
        si++;
    }
}

/**
 * str = readme is nice practice to make notes
 * str = readme is a pr good practice to make notes
 * si = 10, li = 8;
 * repStr = "best"
 */

int main(){
    string str = "readme is a pr good practice to make notes";
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
    // cout<<"my function: '"<<doErase(str, 6)<<"'"<<endl;
    // cout<<"stl function: "<<str.erase(6)<<endl;
    // cout<<"After erasing: "<<str<<endl;
    
    // // to compare
    // string str2;
    // cout<<"Enter string to compare: ";
    // getline(cin, str2);
    // cout<<"is "<<str<<" is equal to "<<str2<<"? "<<str.compare(str2)<<endl;

    // to find
    // cout<<"index number of 'e' is: " <<str.find("practice")<<endl; 
    // cout<<"index number of 'e' is: " <<findStr(str, "practice")<<endl; 

    // to replace
    str.replace(6, 8, "Kum");
    // doReplace(str, 6, 10, "Kumar");
    cout<<"After replacing: "<<str<<endl;

    return 0;
}