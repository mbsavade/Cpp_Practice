//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    cout<<"!!MERRY CHRISTMAS!!\n\n";
    int n =5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<"*";
        }
        cout<<endl; 
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    return 0;
}