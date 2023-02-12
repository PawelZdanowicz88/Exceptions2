#pragma once
#include <string>

class Figure
{
protected:
	int sidesCount = 0;
	std::string name;
public:
	Figure();
	Figure(std::string name, int sidesCount);
	int get_sidesCount();
	std::string get_name();
	void print();
	void info();
};