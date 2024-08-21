#include<iostream>
#include<vector>

using namespace std;
void findDuplicate(vector<int> num){
    // visited method
    for(int i=0; i<num.size(); i++){
        int index = abs(num[i]);
        if(num[index-1]>0){
            num[index-1] *= -1;
        }
    }
    for(int i=0; i<num.size(); i++){
        if(num[i]>0){
            cout<<i+1<<" ";
        }
    }

    
}
int main(){
    vector<int> num{1,3,5,3,4};
    findDuplicate(num);
    // cout<<missing<<endl;

    return 0;
}