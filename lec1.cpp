#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a= 12; //initializtion

    cout<<"Size of int is  "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float is "<<sizeof(b)<<endl;
    

    char c;
    cout<<"Size of Char is "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool is "<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"Size of short int "<<sizeof(si)<<endl;
    cout<<"Size of long int "<<sizeof(li)<<endl;

    return 0;
}