#include <iostream>
#include "print_info.h"

void print_info(Figure* fig)
{
	std::cout << fig->get_name() << " ";
	fig->print();
	std::cout << " " << "������. " << std::endl;
}