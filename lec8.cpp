#include<iostream>
using namespace std;

int main(){
    

    // char button;
    // cout<<"Enter a Character : ";
    // cin>>button;

    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // } else if(button=='b'){
    //     cout<<"Namaste"<<endl;
    // } else if(button=='c'){
    //     cout<<"Hola"<<endl;
    // } else if(button=='d'){
    //     cout<<"ciao"<<endl;
    // } else {
    //     cout<<"I am Still learning more!"<<endl;
    // }



// Write the above program with Switch Case Statement :--------------------------------


// switch (button)
// {
// case 'a':
//     cout<<"Hello"<<endl;
//     break;
// case 'b':
//     cout<<"Namaste"<<endl;
//     break;
// case 'c':
//     cout<<"Hola"<<endl;
//     break;
// case 'd':
//     cout<<"Ciao"<<endl;
//     break;

// default:
// cout<<"I am still learning more !"<<endl;
//     break;
// }




// Implement a simple calculator using Switch :--------------------------------------------

// float n1,n2;
// cout<<"Enter 2 Numbers: ";
// cin>>n1>>n2;
// char op;
// cout<<"Enter a Character: ";
// cin>>op;

// switch (op)
// {
// case '+':
//     cout<<n1+n2<<endl;
//     break;
// case '-':
//     cout<<n1-n2<<endl;
//     break;
// case '*':
//     cout<<n1*n2<<endl;
//     break;
// case '/':
//     cout<<n1/n2<<endl;
//     break;

// default:
// cout<<"Enter a Some another Operator !"<<endl;
//     break;
// }



// WAP to find Wheather a given alphabet Is a Vowel or a Consonant :---------------------------------

char c;
cout<<"Enter a Character : ";
cin>>c;

switch (c)
{
case 'a':
    cout<<"It is a Vowel"<<endl;
    break;
case 'e':
    cout<<"It is a Vowel"<<endl;
    break;
case 'i':
    cout<<"It is a Vowel"<<endl;
    break;
case 'o':
    cout<<"It is a Vowel"<<endl;
    break;
case 'u':
    cout<<"It is a Vowel"<<endl;
    break;

default:
cout<<"It is a Consonant";
    break;
}
    return 0;
}