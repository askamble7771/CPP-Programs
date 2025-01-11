//Use of this keyword
#include <iostream>
using namespace std;

class Person
{
	int age;
    
    public:
    Person(int age)
    {	
    	this->age=age;	
    }
    
    void getAge()
    {
		cout<<"Age of the person is: "<<this->age<<endl;  
    }
};

int main() 
{  
  Person p1(30);
  p1.getAge();
  
  Person p2(25);
  p2.getAge();
    
  return 0;
}
