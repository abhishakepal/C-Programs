#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

// Chech if the given Number is Prime or not :---------------------------------


    // bool flag=0;

    // for(int i=2;i<=sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<"Non-Prime"<<endl;
    //         flag=1;
    //         break;
    //     }
    // }

    // if(flag==0){
    //     cout<<"Prime"<<endl;
    // }



// Reverse a given Number 'n' : ----------------------------------------------

//     int reverse = 0;
//     while (n > 0)
//     {
//         int lastdigit = n % 10;
//         reverse = reverse * 10 + lastdigit;
//         n = n / 10;
//     }

// cout<<reverse<<endl;



// Chech if given number is Armstrong Number or Not :--------------------------


int sum=0; 
int originaln=n;
while(n>0){
    int lastdigit=n%10;
    sum= pow(lastdigit,3);
    n=n/10;
}

if(sum==originaln){
    cout<<"Armstorng Number"<<endl;
} else{
    cout<<"Not an Armstrong Number"<<endl;
}

    return 0;
}