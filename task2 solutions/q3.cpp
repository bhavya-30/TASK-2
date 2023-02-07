#include<iostream>
using namespace std;
int main()
{
    int total,boys,girls;
    boys=17;            //number of boys who get 'A' grade
    total=(80*45)/100; //total number of students who get 'A'grade
    girls=total-boys;
    cout<<"number of girls who get 'A' grade are:"<<girls;

    return 0;
}
