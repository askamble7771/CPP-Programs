#include <iostream>
using namespace std;

void PrintTable(int num)
{
    for(int i=1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}

 int main()
 {
    int num;
    cout<<"Enter any number: ";
    cin>>num;

    PrintTable(num);

    return 0;
 }