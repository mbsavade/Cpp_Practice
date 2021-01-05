//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;

int factorial(int n){
    int fac=1;
    for(int i=n;i>=2;i--){
        fac = fac * i;
    }
    return fac;
}

int main()
{
    system("CLS");
    int num1 =3;
    int num2 = 4;
    cout<<"Enter the numbers: ";
    cin>>num1>>num2;

    cout<<"Factorial of "<<num1<<" is "<<factorial(num1)<<endl;
    cout<<"Factorial of "<<num2<<" is "<<factorial(num2);
    return 0;
}