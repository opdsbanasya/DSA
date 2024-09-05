#include<iostream>

using namespace std;

int findSquareRoot(int n){
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    int ans;

    int target  = n;

    while(start <= end){
        if(mid*mid == target){
            return mid;
        }
        if(mid*mid > target){
            end = mid - 1;
        } else {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int precision;
    cout<<"Enter precision"<<endl;
    cin>>precision;

    int ans = findSquareRoot(n);
    double finalAns = ans;
    double step = 0.1;
    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j=j+step){
            finalAns = j;
        }
        step = step / 10;
    }

    cout<<"The square root of "<<n<<" is "<<finalAns<<endl;
    return 0;
}