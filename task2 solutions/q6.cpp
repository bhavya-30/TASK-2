#include<iostream>
using namespace std;
int main()
{
    int op1,op2;
    char ch;
    cout<<"enter the value of operand 1 and operand 2:";
    cin>>op1>>op2;
    cout<<"sum ="<<op1+op2<<endl;
     cout<<"difference ="<<op1-op2<<endl;
   cout<<"product="<<op1*op2<<endl;
    cout<<"division ="<<op1/float(op2)<<endl;
    return 0;

}