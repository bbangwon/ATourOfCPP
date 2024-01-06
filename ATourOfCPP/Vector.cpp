#include <stdexcept>
#include "Vector.h"

Vector::Vector(int s) 
{
	if(s < 0)
		throw std::length_error{"Vector::Vector(int) ������: ũ�Ⱑ ������"};

	elem = new double[s];
	sz = s;
}

double& Vector::operator[](int i)
{
	if(i < 0 || size() <= i)
		throw std::out_of_range{"Vector::operator[] : �ε��� ���� ����"};

	return elem[i];
}

int Vector::size()
{
	return sz;
}