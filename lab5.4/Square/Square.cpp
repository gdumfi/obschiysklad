#include "Square.h"

Square::Square()
{
	a = 0;
}
Square::Square(int a)
{
}

void Square::input()
{
	std::cin >> a;
}
void Square::output()
{
	std::cout << a;
}
int Square::per()
{
	return 4*a;
}
int Square::per(int a)
{
	return 4*a;
}
int Square::area()
{
	return a*a;
}
int Square::area(int a)
{
	return a*a;
}