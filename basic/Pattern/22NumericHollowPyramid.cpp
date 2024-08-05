#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    for(int row=0; row<n; row++){
        // space
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        int start = 1;
        for(int col=0; col<2*row+1; col++){
            if(col==0 || col== 2*row || (row==n-1 && col%2 ==0)){
                cout<<start;
                start++;
            } else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}