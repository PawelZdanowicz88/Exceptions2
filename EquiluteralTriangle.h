#pragma once
#include "Triangle.h"
#include <string>

class EquiluteralTriangle : public Triangle
{
public:
	EquiluteralTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};