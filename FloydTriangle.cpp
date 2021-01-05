//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    int count = 1;
    cout<<"Enter number of rows to be printed in FLOYD's Pattern:\n";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
return 0;
}