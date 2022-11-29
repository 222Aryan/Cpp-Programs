#include<iostream>
using namespace std;


// int main(){
//     int num1;
//     cout<<"Enter Number : ";
//     cin>>num1;
//     int sum = 0;
//     for (int i = num1; i > 0; i--){
//         sum = sum + i;
//     }
//     cout<<"sum = "<<sum;
//     return 0;
// }

// int main(){
//     int num1;
//     cout<<"Enter Number : ";
//     cin>>num1;

//     int sum = 0;
//     int i = num1;

//     while(i > 0){
//         sum = sum+i;
//         i -= 1;
//     }
//     cout<<"sum = "<<sum;


// }

int main(){
    int num1;
    cout<<"Enter Number : ";
    cin>>num1;
    
    int sum = 0;
    
    do{
        sum = sum+num1;
        num1 -= 1;
    }while(num1>=0);

    cout<<"sum = "<< sum;
    return 0;
}