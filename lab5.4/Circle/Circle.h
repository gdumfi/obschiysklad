#include <iostream>
#include "Position.h"
class Circle : public virtual Position
{
private:
	int r;
public:
	Circle();
	Circle(int r);
	void input();
	void output();
	int per();
	int area();
};