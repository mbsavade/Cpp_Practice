//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;

int fibo(int n){
    int fac=1;
    for (int i = n; i>=2; i--)
    {
        fac*=i;
    }
    return fac;
    
}

int main()
{
    system("CLS");
    int n,r;
    cin>>n>>r;
    cout<<"Combination: "<<endl;
    cout<<fibo(n)/(fibo(r)*fibo(n-r));
    return 0;
}