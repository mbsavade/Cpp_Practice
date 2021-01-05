//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;

void fibo(int n)
{
    int first = 0;
    int next= first+1 ,last;
    for(int i =1;i<=5;i++)
    {
        cout<<first<<endl;
        last = first + next;
        first = next;
        next = last;
    }
}
int main()
{
    system("CLS");
    int n;
    cin>>n;
    fibo(n);
    return 0;
}