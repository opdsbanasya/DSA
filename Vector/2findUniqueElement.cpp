#include<iostream>
#include<vector>

using namespace std;

int uniqueElement(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        cout<<"i = "<<i<<endl<<"before "<<ans<<endl;
        ans = ans^arr[i];
        cout<<"after "<<ans<<endl;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(auto i:arr){
        cin>>arr[i];
    }
    cout<<"The unique element is: "<<uniqueElement(arr);

    return 0;
}