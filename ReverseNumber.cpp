//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    cout<<"Enter the number you want to reverse:\n";
    int n, rev;
    cin>>n;
    while(n>0){
        int digit = n%10;
        rev =(rev*10) + digit;
        n /= 10;
    }
    cout<<"The reversed number is: "<<rev;
    return 0;
}