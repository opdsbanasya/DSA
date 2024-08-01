/*
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int row = 0; row<n; row++){
        // space
        for(int sp=0;sp<row;sp++){
            cout<<" ";
        }
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}