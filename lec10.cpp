#include<iostream>
using namespace std;

int main(){



// Rectangle Pattern :--------------------------------------


    // int row,col;
    // cin>>row>>col;

    // for(int i=1;i<=row;i++){
    //     for(int j=1;j<=col;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }



// Hollow Rectangle Pattern :----------------------------------

// int row,col;
// cin>>row>>col;

// for(int i=1;i<=row;i++){
//     for(int j=1;j<=col;j++){
//         if(i==1 || i==row || j==1 || j==col){
//             cout<<"*";
//         } 
//         // else if(j==1 || j==col){
//         //     cout<<"*";
//         // } 
//         else {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }



// Inverted Half Pyramid :-----------------------------


// int n;
// cin>>n;

// for(int i=n;i>=1;i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }



// Inverted Half Pryamid after 180 Degree rotation :------------------------------------------

// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         if(j<=n-i){
//             cout<<"  ";
//         } else {
//             cout<<"* ";
//         }
//     } cout<<endl;
// }



// Half Pyramid using Numbers :-------------------------------------


// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }


// Floyd's Triangle :--------------------------------------------


// int n;
// cin>>n;
// int count=1;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }



// Butterfly Pattern :-------------------------------------------


int n;
cin>>n;

for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}

for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
        cout<<"  ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}