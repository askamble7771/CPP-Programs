//Use of static member
#include <iostream>
using namespace std;

class Student
{
	static int count;
    
    public:
    Student()
    {
    	count++;
    }
    
    int getCount()
    {
    	return count;
    }
};

int Student::count =0;

int main() 
{  
  Student s1, s2;
  cout<<"Total students: "<<s1.getCount()<<endl;
  
  return 0;
}
