#include "EquiluteralTriangle.h"
#include "bad_fig.h"
#include <string>

EquiluteralTriangle::EquiluteralTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Triangle(name, sideA, sideB, sideC, angleA, angleB, angleC)
{
	if (!((sideA == sideB) && (sideA == sideC) && (sideB == sideC)))
	{
		Figure::info();
		throw BadFig("�������: ������� ������������ �� ����� ����� �����.");
	}
	if (!((angleA == 60) && (angleB == 60) && (angleC == 60)))
	{
		Figure::info();
		throw BadFig("�������: ��� ���� �� ����� 60.");
	}
}