#include <stdexcept>
#include "Vector.h"

Vector::Vector(int s) 
{
	if(s < 0)
		throw std::length_error{"Vector::Vector(int) 생성자: 크기가 음수임"};

	elem = new double[s];
	sz = s;
}

double& Vector::operator[](int i)
{
	if(i < 0 || size() <= i)
		throw std::out_of_range{"Vector::operator[] : 인덱스 범위 오류"};

	return elem[i];
}

int Vector::size()
{
	return sz;
}