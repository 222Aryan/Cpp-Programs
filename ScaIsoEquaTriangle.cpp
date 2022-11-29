#include<iostream>
using namespace std;

int main(){
    int side1, side2 , side3;
    cout<<"Enter First Side  : ";
    cin>>side1;
    cout<<"Enter Second Side : ";
    cin>>side2;

    cout<<"Enter Third side  : ";
    cin>>side3;

    if (side1 == side2 && side2 == side3 ){
        cout << "Triangle is Equilateral";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1){
        cout<<"Triangle is Isosceles";
    }
    else{
        cout << "Triangle is Scalene";
    }
    return 0;
}