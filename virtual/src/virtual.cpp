
#include <iostream>
using namespace std;


class A
{
public :
	int id=101 , sal=1000 ;
	void virtual display()
	{ cout<<"class A  display()"<<endl ;
		cout<<"id: "<<this->id<<endl ;
		cout<<"sal : "<<this->sal <<endl ;
	}
};
class B  :public A
{
public :
	int bonus =500;
	void display()
	{ cout<<"class B display()"<<endl ;
		cout<<"id : "<<this->id<<endl ;
		cout<<"sal : "<<this->sal<<endl ;
		cout<<"bonus: "<<this->bonus ;
	}
};

int main() {


	A ptr ;
	B obj ;
	ptr  = obj ;

	obj.display() ;

	return 0;
}
