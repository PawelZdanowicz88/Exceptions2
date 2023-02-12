#include "IsoscelesTriangle.h"
#include "bad_fig.h"
#include <string>

IsoscelesTriangle::IsoscelesTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle(name, sideA, sideB, sideC, angleA, angleB, angleC)
{
	if ((sideA != sideC) || (angleC != angleA))
	{
		Figure::info();
		throw BadFig("������� : ������� � � � �� �����.");
	}
	if (angleA != angleC)
	{
		Figure::info();
		throw BadFig("������� : ���� � � � �� ����� ����� �����.");
	}
}