#include<iostream>
#include<math.h>
using namespace std;


// Print Fibonacci Sequence upto n :-------------------------------


// void fib(int n){

//     int t1=0,t2=1,nextTerm;

//     for(int i=0;i<=n;i++){
//         cout<<t1<<endl;
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;
// }


// int main(){

//     int n;
//     cin>>n;

//     fib(n);

//     return 0;
// }



// Factorial of a given Number :----------------------------------------------------------


// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i; 
//     }
//     return factorial;
// }


// int main(){
      
//     int n;
//     cin>>n;
    
//     // fact(n);

//     int ans=fact(n); 
//     cout<<ans<<endl; 

//     return 0;
// }



// Binary Cofficient (calculate nCr) :---------------------------------------------------


// int fact(int n){
//     int factorial=1;
//     for(int i=2;i<=n;i++){
//         factorial*=i;         //   Means (factorial=factorial*i)
//         }
//     return factorial;
// }


// int main(){

//     int n,r;
//     cin>>n>>r;

//     int ans=fact(n)/(fact(n-r)*fact(r));
//     cout<<ans<<endl;
//     return 0;
// }


// Pascal Triangle :-------------------------------------------------------


int fact(int n){

    int factorial=1;
    for(int i=2;i<=n;i++){
    factorial*=i;
    }
    return factorial;
}


int main(){

    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}


