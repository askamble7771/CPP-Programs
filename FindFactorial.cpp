#include <iostream>
using namespace std;

int FindFactorial(int num)
{
    int factorial = 1;
    for(int i=1; i<=num; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int num = 5;

    int factorial = FindFactorial(num);

    cout<<"Factorial of "<<num<<" is: "<<factorial<<endl;

    return 0;
}