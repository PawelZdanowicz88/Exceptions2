#pragma once
#include "Triangle.h"
#include <string>

class RectTriangle : public Triangle
{
public:
	RectTriangle(std::string name, int sideA, int sideB, int sideC, int angleA, int angleB, int angleC);
};