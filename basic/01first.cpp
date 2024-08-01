#include<iostream>

using namespace std;
// namespece ek container h jisme differnet function or entities hoti h
// why we use namespace -> to avoid name conflict

int main(){
    
    int a = 10; // 4 byte -> 32bit -> large num : 2^32 -1
    cout<<a<<" size: "<<sizeof(a)<<endl;

    char ch = 'c'; // 1byte
    cout<<ch<<endl;
    
    const int b = 10; // constant

    bool b = false;
    cout<<b<<endl; 
    
    float v = 10.53; // 4 byte
    cout<<sizeof(v)<<endl;

    long m = 5;
    cout<<m<<" size: "<<sizeof(m)<<endl;
    


    // Compiler vs interprete [explore]
    // 32 bit vs 64 bit [explore]
    // variable naming convention [explore]

    // how -numbers stored in memory
    //  2's complement = 1's complement(flip 0 and 1) + 1
    //  -ve values are stored in memory in form of 2's complement of similar than +ve value
    //  if MSB is 0 than it is +ve else -ve
    

    //signed -> can store -ve, 0, +ve -> -2^(n-1) to 2^(n-1)-1 for int
    // unsigned -> only +ve -> 0 to 2^n-1 for int

    // Type casting - i) implicit -> auto
    char li = 97; // 1byte
    cout<<li<<endl;
    //ii) explicit -> manual
    double j = 2.3;
    int w = (int)j;
    cout<<w<<endl;


    // operator
    // i) Arithmetic -> +,-,*,/,% -> 
    // ii) Relational -> ==, >, <, !=, >=, <=
    // iii) Assignment -> =
    // iv) Logical -> &&, ||, !
    // v) Bitwise -> baad me

    // precidence table[hw]   
    return 0;
}