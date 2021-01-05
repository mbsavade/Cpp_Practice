//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
using namespace std;

int factorial(int num){
    int fac=1;
    for(int i=num; i>=2;i--){
        fac *=i;
    }
    return fac;
}
int main()
{
 system("CLS");
 int n;
 cin>>n;
 cout<<"Pascals Triangle:"<<endl;
 for(int i =0; i<n;i++){
     for(int j =0; j<=i;j++){

         cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
     }
     cout<<endl;
 } 

 return 0;
}