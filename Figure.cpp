#include <iostream>
#include <string>
#include "Figure.h"
#include "bad_fig.h"

Figure::Figure() {}
Figure::Figure(std::string name, int sidesCount) : Figure()
{
	this->sidesCount = sidesCount;
	this->name = name;
	if (this->sidesCount != 0)
	{
		Figure::info();
		throw BadFig("Причина: количество сторон не равно 0");
	}
}
int Figure::get_sidesCount()
{
	return sidesCount;
}
std::string Figure::get_name()
{
	return name;
}
void Figure::print()
{
	std::cout << "(Количество сторон " << get_sidesCount() << ")";
}
void Figure::info()
{
	std::cout << name << " ";
	print();
	std::cout << " не был создан";
}
