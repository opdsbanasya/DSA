#include<iostream>
#include<vector>

using namespace std;
int findDuplicate(vector<int> num){
    // visited method
    int ans = -1;
    for(int i=0; i<num.size(); i++){
        int index = abs(num[i]);
        if(num[index]<0){
            ans = index;
            break;
        }
        num[index] *= -1;
    }
    return ans;
}
int main(){
    vector<int> num{3,1,5,4,2};
    int dupEle = findDuplicate(num);
    if(dupEle == -1){
        cout<<"No duplicate found";
    } else {
        cout<<"Duplicate element is: "<< dupEle<<endl;
    }

    return 0;
}