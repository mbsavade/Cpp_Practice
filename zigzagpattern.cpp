//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    cout<<"Enter how many elements you want:\n";
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"* ";
            }else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}