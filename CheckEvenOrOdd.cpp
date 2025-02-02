#include <iostream>
using namespace std;

bool CheckEvenOdd(int num)
{
    if(num%2==0)return true;
    else return false;

}

int main()
{
    int num;
    cout<<"Enter any number: "<<endl;
    cin>>num;

    bool status = CheckEvenOdd(num);

    if(status)cout<<"Number is Even."<<endl;
    else cout<<"Number is Odd."<<endl;

    return 0;
}