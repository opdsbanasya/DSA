#include<iostream>
#include<vector>

using namespace std;
int findDuplicate(vector<int> num){
    // visited method
    /*int ans = -1;
    for(int i=0; i<num.size(); i++){
        int index = abs(num[i]);
        if(num[index]<0){
            ans = index;
            break;
        }
        num[index] *= -1;
    }
    return ans;*/

    // positioning method
    while(num[0] != num[num[0]]){
        swap(num[0], num[num[0]]);
    }
    return num[0];
}
int main(){
    vector<int> num{3,1,3,4,2};
    int dupEle = findDuplicate(num);
    cout<<dupEle<<endl;

    return 0;
}