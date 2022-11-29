#include<iostream>
using namespace std;

// int main(){
//     int num;
//     cout<< "Enter Number till the sum : ";
//     cin>>num;
//     int sum = 0;
//     for(int i = 1 ; i<=num ; i++){
//         sum = sum+i;
//     }
//     cout<<"Sum = "<<sum;
// }

// int main(){

//     int num;

//     cout<<"Enter Number : ";
//     cin>>num;

//     int i = 1;
//     int sum = 0;

//     while (i <= num){
//         sum = sum + i;
//         i++;
//     }
//     cout<<sum;

//     return 0;

// }

int main(){

    int num;
    cout<< "Enter Number : ";
    cin>>num;

    int sum = 0;
    int i = 1;

    do
    {
        sum = sum + i;
        i++;
    }while (i <= num);

    cout<<"Sum = "<<sum;

    return 0;
    
}