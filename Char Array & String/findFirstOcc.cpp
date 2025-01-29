#include<bits/stdc++.h>

using namespace std;

int findStr(string str, char target, int jump = 0){
    int i = jump;
    int len = str.size();
    while(i<str.size()){
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
    int len = str.size();
    int lenTarget = target.size();
    while(jump < len){
        int firstOcc = findStr(str, target[0], jump);
        if(firstOcc < 0) return firstOcc;
        jump = firstOcc + 1;

        bool match = true;
        for(int i=0; i<lenTarget; i++){
            if(str[firstOcc] != target[i]){
                match = false;
                break;
            }
            match = true;
            firstOcc++;
        }
        if(match == true) return firstOcc-lenTarget; // here first occurence is increase by length of target inside loop
    }

    return -1;
}

int main(){

    string str = "mississippi";

    cout<<"the first occurence is: "<<findStr(str, "sis");

    return 0;
}