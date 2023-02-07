#include<iostream>
using namespace std;
int main()
{
    int num,n,i=0,sum=0;
    cout<<"enter the five digit number:";
    cin>>num;
    while(num>0)
    {
        n=num%10;
        i++;
        if(i==2)
        {
            sum=n;
        }
        if(num<=9)
        {
            sum=sum+num;
            
            break;
        }
        
        num=num/10;
        
        
    }
    cout<<"sum of first and second last digit is:"<<sum;
    return 0;
}