#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxProfit(vector<int> prices) {
        int minPr = prices[0];
        int maxProf = 0;
        for(int i=1;i<prices.size();i++){
            if(minPr>prices[i]){
                minPr = prices[i];
            }
            if(maxProf < (prices[i]-minPr)){
                maxProf = prices[i]-minPr;
            }
        }
        return maxProf;

    }

int main(){
    int n;
    cout<<"Enter size of vector"<<endl;
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements"<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    
    cout<<"Max profit "<<maxProfit(arr);

    
    return 0;
}