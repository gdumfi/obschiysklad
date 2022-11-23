#include "Position.h"

Position::Position()
{
	x = y = 0;
}
Position::Position(int x, int y)
{
}

void Position::input()
{
	std::cin >> x;
	std::cin >> y;
}
void Position::output()
{
	std::cout << x;
	std::cout << y;
}