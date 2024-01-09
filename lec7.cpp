#include<iostream>
using namespace std;

int main(){

    // for(int i=0;i<=100;i++){
    //     if(i%3==0){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }




// Check If the given no. is Prime or NOt :-----------------------------------------


// int n;
// cin>>n;
// int i;
// for(i=2;i<n;i++){
//     if(n%i==0){
//         cout<<"Non Prime"<<endl;
//         break;
//     }
// }
// if(i==n){
//     cout<<"Prime"<<endl;
// }




// Print all the Prime numbers between A to B :-------------------------------------

int a,b;
cin>>a>>b;
int i;
for(int num=a;num<=b;num++){
    for(i=2;i<num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i==num){
        cout<<num<<endl;
    }
}

}
