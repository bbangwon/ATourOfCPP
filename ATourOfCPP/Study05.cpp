#include <iostream>
#include "Vector.h"

using namespace std;

namespace Study05
{
	double sqrt_sum(Vector& v)
	{
		double sum = 0;

		for (int i = 0; i < v.size(); i++)
			sum += sqrt(v[i]);

		return sum;
	}
}

int main()
{

	Vector v(3);
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;

	cout << Study05::sqrt_sum(v) << endl;

	return 0;

	
}