//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    int fact = 1;
    cin>>n;
    for(int i=n;i>=2;i--){
        fact = fact * i;
    }
    cout<<fact;
    return 0;
}