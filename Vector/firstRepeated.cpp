#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;
int firstRepeated(vector<int> num){
    unordered_map<int, int> hash;
    
    for(int i=0; i<num.size(); i++){
        hash[num[i]]++;
    }
    for(int i = 0; i<num.size(); i++){
        if(hash[num[i]]>1){
            return num[i];
        }
    }
    return -1;
}
int main(){
    vector<int> num{3,1,3,4,2};
    int firstRepeatingNumber = firstRepeated(num);
    cout<<firstRepeatingNumber<<endl;

    return 0;
}