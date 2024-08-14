#include <iostream>
using namespace std;


int main() {
    int arr[] = {1,0,0,1,0,0,1,1};
    int size = 8;

    int countZero = 0;
    int countOne = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 1){
            countOne++;
        }
        if(arr[i] == 0){
            countZero++;
        }
    }

    cout<<"Count of Zeroes is : "<<countZero<< endl;
    cout<<"Count of Ones is : "<<countOne<< endl;

    return 0;
}