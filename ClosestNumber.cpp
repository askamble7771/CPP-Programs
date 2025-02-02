#include <iostream>
using namespace std;

int FindClosestNumber(int n, int m)
{
    int quotient = n/m;

    int n1 = quotient * m;
    int n2;
    if(n*m > 0)
    {
        n2 = m*(quotient + 1);
    }
    else{
        n2 = m*(quotient - 1);
    }

    if(n-n1 < n2-n)
        return n1;
    else
        return n2;    
}

int main()
{
    int n=15, m=4;

    cout<<"Closest number is: "<<FindClosestNumber(n, m);

    return 0;
}