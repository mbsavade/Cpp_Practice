//Author:: MAHAKUJI SAVDE

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
system("CLS");
int n1,n2;
cin>>n1>>n2;
for(int i =n1;i<=n2;i++){
    if(isPrime(i)){
        cout<<i<<endl;
    }
}
return 0;
}