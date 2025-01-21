#include<bits/stdc++.h>

using namespace std;

// without null charactor '\0'
void intoUppercase( char name[]){
    int i = 0;

    while(name[i] != '\0'){
        name[i] = name[i] -'a' + 'A';
        i++;
    }
}

// with null charactor '\0'
void intoUppercaseWithSpace( char name[], int size ){
    for(int i=0; i<size; i++){
        if(name[i] == '\0') {
            cout<<name[i]<<(int) name[i];
            continue;
        }
        else {
            cout<<name[i]<<"->";
            name[i] = name[i] + 'a' - 'A';
            cout<<name[i];
        }
        cout<<endl;
    }
}

void printName(char name[], int size){
    for(int i=0; i<size; i++){
        if(name[i] == '\0') cout<<" ";
        else cout<<name[i];
    }
}

void caseSwapping(char name[], int size){
    for(int i=0; i<size; i++){
        if(name[i] >= 'a' && name[i] <= 'z') name[i] = name[i] - 'a' + 'A';
        else if(name[i] >= 'A' && name[i] <= 'Z') name[i] = name[i] - 'A' + 'a';
        else continue;
    }
}

int main() {
    char name[100];
    cin.getline(name, 100);

    int size = strlen(name);

    // intoUppercase(name);
    // intoUppercaseWithSpace(name, size);
    caseSwapping(name, size);
    printName(name, size);

    return 0;
}