#include <iostream>
using namespace std;

int SumOfNaturalNumbers(int num)
{
    int sum=0;
    for(int i=1; i<=num; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int sum = SumOfNaturalNumbers(num);

    cout<<"Sum of first "<<num<<" natural numbers are: "<<sum;
}