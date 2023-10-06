#include <iostream>
#include "myLibrary.h"
using namespace std;

class Plane : public IFly {
public:
	virtual void Fly() {
		cout << "Plane can fly " << endl;
	}
};

void MyFuncSwim(ISwim* ptr)
{
	ptr->Swim();
}
void MyFuncFly(IFly* ptr)
{
	ptr->Fly();
}

int main() {
	Parrot obj("King parrot", 1, "Afrika");
	MyFuncFly(&obj);

	Plane obj2;
	MyFuncFly(&obj2);
}