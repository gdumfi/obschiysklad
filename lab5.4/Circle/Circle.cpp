#include "Circle.h"

Circle::Circle()
{
	r = 0; 
}
Circle::Circle(int r)
{
}

void Circle::input()
{
	std::cin >> r;
}
void Circle::output()
{
	std::cout << r;
}
int Circle::per()
{
	float pi = 3.1415;
	return 2 * r * pi;
}
int Circle::per(int r)
{
	float pi = 3.1415;
	return 2 * r * pi;
}
int Circle::area()
{
	float pi = 3.1415;
	return pi * r * r;
}
int Circle::area(int r)
{
	float pi = 3.1415;
	return pi * r * r;
}