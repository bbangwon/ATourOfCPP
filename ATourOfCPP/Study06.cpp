import ModuleVector;
#include<cmath>
#include<iostream>

using namespace std;

namespace Study06
{
	double sqrt_sum(const ModuleVector& v)
	{
		double sum = 0;
		for (size_t i = 0; i < size(v); i++)
		{
			sum += std::sqrt(v[i]);
		}
		return sum;
	}

	int main()
	{

		ModuleVector v(3);
		v[0] = 1;
		v[1] = 2;
		v[2] = 3;

		cout << v.size() << endl;
		cout << Study06::sqrt_sum(v) << endl;

		return 0;
	}
}

