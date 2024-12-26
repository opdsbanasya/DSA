#include<bits/stdc++.h>

using namespace std;

int getLength(char arr[]){
    int length = 0;
    int i = 0;
    
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void reverseString(char arr[]){
    int l = 0;
    int size = getLength(arr);
    int h = size;

    while(l<=h){
        swap(arr[l], arr[h]);
        l++;
        h--;
    }
}

int main(){
    // char name[100] = "Dharm Singh";
    // char name[100];
    // cin>>name;
    // cout<<name<<endl;

    // cout<<"enter "<<endl;
    // cin>>name[3];
    // cin>>name[50];

    // for(int i = 0; i<52; i++){
    //     cout<<i <<" : "<<name[i]<<endl;
    // }

    char name[100] = "Bahubali";
    // cout<<"Length is: "<<getLength(name)<<endl;

    //  //* STL functions -> predefined function for char array in cpp
    // cout<<"Length is: "<<strlen(name)<<endl;

    int size = getLength(name);
    reverseString(name);
    
    for(int i = 0; i<=size; i++){
        cout<<name[i];
    }

    return 0;
}