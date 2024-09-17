#include<iostream>
#include<vector>

using namespace std;

vector<int> intersection(vector<int> arr, vector<int> brr){
    vector<int> ans;
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<brr.size(); j++){
    //         if(arr[i] == brr[j]){
    //             brr[j] = INT16_MIN;
    //             cout<<arr[i]<<" "<<endl;
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }

    int l = 0;
    int m = 0;
    int i = 0;

    while(l<arr.size() && m<brr.size()){
        if(arr[l] == brr[m]){
            ans.push_back(brr[m]);
            m++;
            l++;
        } else if(arr[l] > brr[m])m++;
        else l++;
    }

    
    return ans;
}

int main(){
    // int n;
    // cout<<"Enter size of vector 1"<<endl;
    // cin>>n;
    // vector<int> arr(n);
    // cout<<"Enter the elements of vector 1"<<endl;
    // for(int i=0; i<arr.size(); i++){
    //     cin>>arr[i];
    // }

    // int m;
    // cout<<"Enter size of vector 2"<<endl;
    // cin>>m;
    // vector<int> brr(m);
    // cout<<"Enter the elements of vector 2"<<endl;
    // for(int i=0; i<brr.size(); i++){
    //     cin>>brr[i];
    // }

    vector<int> arr{1,2,3,4,8,9,10};
    vector<int> brr{2,3,5,7,10};

    vector<int> intersectionArray = intersection(arr, brr);
    for(int i=0; i<intersectionArray.size(); i++){
        cout<<intersectionArray[i]<<" ";
    }

    return 0;
}