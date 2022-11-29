#include<iostream>
using namespace std;

int main()
{
    int num1 , num2 , num3;
    cout<<"Enter first number\n";
    cin>>num1;
    cout<<"Enter Second number\n";
    cin>>num2;
    cout<<"Enter third number\n";
    cin>>num3;
    if (num1 > num2 && num1 > num3)
    {
        cout<<num1;
    }
    else if (num2 > num3){
        cout<<num2;
    }
    else{
        cout<<num3;
    }
    return 0;


}
