#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            if(col == 0){
                cout<<"*";
            } else{
                cout<<col;
            }
        }
        col = col - 1;
        for(; col>0; col--){
            if(col == 1){
                cout<<"*";
            } else{
                cout<<col-1;
            }
        }
        cout<< endl;
    }

    for(int row=0; row<n-1; row++){
        int col;
        for(col=0; col<n-row-1; col++){
            if(col == 0){
                cout<<"*";
            } else{
                cout<<col;
            }
        }
        col = col - 1;
        for(; col>0; col--){
            if(col == 1){
                cout<<"*";
            } else{
                cout<<col-1;
            }
        }
        cout<< endl;
    }
    return 0;
}