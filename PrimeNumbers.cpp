//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
    system("CLS");
    int n;
    bool flag=0;
    cout<<"Enter the number till when you want to check prime number:\n";
    cin>>n;
    cout<<sqrt(n);
    for(int i=2;i<=sqrt(n);i++){ /*We used sqrt to minimize the number of value loop is going to compare.*/
        if(n%i==0){
            cout<<"Non-Prime\n";
            flag=1;
            break;
        }
    }
    if (flag==0){
            cout<<"Prime number";
        }

    return 0;
}