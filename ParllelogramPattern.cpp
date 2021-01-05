//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int n=5;
    for(int i = 1; i<= n; i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j = 1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}