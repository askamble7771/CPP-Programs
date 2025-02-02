#include <iostream>
using namespace std;

struct Point{
    int x, y;
};

bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    if((l2.x < l1.x || l2.x < r1.x) && (l2.y <l1.y || l2.y < r1.y))
    {
        return true;
    }
    else if ((r2.x < l1.x || r2.x < r1.x) && (r2.y < l1.y || r2.y < r1.y))
    {
        return true;
    }

    return false;
}

int main()
{
    Point l1 = {0, 0}, r1 = {2,2}; 
    Point l2 = {0,3}, r2 = {2,5};

    bool status =  doOverlap(l1, r1, l2, r2);

    if(status)
    {
        cout<<"Rectangle overlaps."<<endl;
    }
    else
    {
        cout<<"Rectangle not overlaps"<<endl;
    }

    return 0;
}