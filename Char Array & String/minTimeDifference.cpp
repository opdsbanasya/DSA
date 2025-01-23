#include<bits/stdc++.h>

using namespace std;

int findMinDifference(vector<string> timePoints){
    vector<int> time;
    int min = INT16_MAX;
    int i=0;
    // calulating total mins
    for(; i<timePoints.size(); i++){
        int hours = std::stoi(timePoints[i].substr(0, 2));
        int mins= std::stoi(timePoints[i].substr(3,5));
        time.push_back(hours*60 + mins);
    }

    // sorting
    sort(time.begin(), time.end());

    // calculating min difference
    for(int j = 0; j<time.size(); j++){
        if((min > time[j+1] - time[j]) && (j+1 < time.size())){
            min = time[j+1] - time[j];
        }
    }

    // must remember this condition
    return min > time[0]+1440-time[i-1] ? time[0]+1440-time[i-1] : min;
}

int main(){
    vector<string> timePoints = {"00:00","23:59","00:00"};

    int minTime = findMinDifference(timePoints);

    cout<<"min time: "<<minTime<<endl;

    return 0;
}