#include<iostream>

using namespace std;

char grade(int marks){
    switch(marks/10){
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default: return 'E';
    }

}

int main(){
    int marks;
    cout<<"Enter Marks"<<endl;
    cin>> marks;

    cout<<"The Grade of student: "<< grade(marks)<<endl;

    return 0;
}