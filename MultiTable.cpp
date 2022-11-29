#include<iostream>
using namespace std;

// int main(){
//     int num1 , num2;

//     cout<<"Enter Number for Table : ";
//     cin>>num1;

//     cout<<"Enter Number Of Times :  ";
//     cin>>num2;

//     for (int i = 1; i <= num2 ; i++){
//         cout<< num1 <<" * "<<i <<" = " << num1*i<<endl;
//     }
//     return 0;
// }

// int main(){
//     int num1 , num2;
//     cout<<"Enter Number For Table : ";
//     cin>>num1;
    
//     cout<<"Enter Number of Times :  ";
//     cin>>num2;

//     int i = 1;

// while( i <= num2){
//     cout<<num1 <<" * "<<i <<" = "<<num1 * i<<endl;
//     i += 1; 
// }

//     return 0;

// }

int main(){

    int num1 , num2;
    cout<<"Enter Number of table : ";
    cin>>num1;

    cout<<"Enter Number Of Times :  ";
    cin>>num2;

    int i = 1;

    do{
        cout<<num1 <<" * "<<i <<" = "<<num1 * i<<endl;
        i += 1;
    }while(i <= num2);

    return 0;

}