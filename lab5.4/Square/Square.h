#pragma once
#include <iostream>
#include "Position.h"
class Square: public virtual Position 
{
private:
	int a;
public:
	Square();
	Square(int r);
	void input();
	void output();
	int per();
	int area();
};