//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    system("CLS");
    int n;
    int sum =0;
    cin>>n;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n /= 10;
    }
    if(sum == originaln){
        cout<<"ArmStrong Number";
    }else
    {
        cout<<"Not Armstrong";
    }
    
    return 0;
}