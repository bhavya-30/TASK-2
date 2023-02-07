#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the three digit number:";
    cin>>num;
    int sum=0,n;
    while(num>0)
    {
       n=num%10;
       sum=sum+n;
       num=num/10;
    }
    cout<<"sum of three digit number is:"<<sum;
    return 0;

}