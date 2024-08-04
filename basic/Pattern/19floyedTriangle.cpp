#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;

    int floyesNum = 0;
    for(int row = 0; row<n; row++){
        for(int col=0;col<row+1; col++){
            floyesNum++;
            cout<<floyesNum<<" ";
        }
        cout<<endl;

    }
    return 0;
}