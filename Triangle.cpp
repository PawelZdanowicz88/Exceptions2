#include <iostream>
#include <string>
#include "Triangle.h"
#include "bad_fig.h"

Triangle::Triangle() : Figure()
{
	this->sidesCount = 3;
}
Triangle::Triangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle()
{
	this->name = name;
	this->sideA = sideA;
	this->sideB = sideB;
	this->sideC = sideC;
	this->angleA = angleA;
	this->angleB = angleB;
	this->angleC = angleC;
	if (sidesCount != 3)
	{
		Figure::info();
		throw BadFig("�������: ���������� ������ �� ����� 3.");
	}
	if ((angleA + angleB + angleC) != 180)
	{
		Figure::info();
		throw BadFig("�������: ����� ����� �� ����� 180.");
	}
}
void Triangle::print()
{
	std::cout << "(������� " << sideA << ", " << sideB << ", " << sideC;
	std::cout << " ���� " << angleA << ", " << angleB << ", " << angleC << ")";
}