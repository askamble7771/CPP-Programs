#include <iostream>
using namespace std;

void SwapNumbers(int &a, int &b)
{
    //Swapping algorithm using two variables
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
    int a = 2,b =3;

    cout<<"Before swapping: a= "<<a<<", b= "<<b<<endl;

    SwapNumbers(a, b);

    cout<<"After swapping: a= "<<a<<", b= "<<b<<endl;

    return 0;
}