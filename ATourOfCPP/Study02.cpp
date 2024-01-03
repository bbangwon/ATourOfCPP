#include <iostream>

using namespace std;

namespace Study02
{
	struct Vector
	{
		int sz;
		double* elem;
	};

	void vector_init(Vector& v, int s)
	{
		v.elem = new double[s];
		v.sz = s;
	}

	double read_and_sum(int s)
	{
		Vector v;
		vector_init(v, s);

		for (auto i = 0; i < s; i++)
			cin >> v.elem[i];

		double sum = 0;
		for (auto i = 0; i < s; i++)
			sum += v.elem[i];

		return sum;
	}

	int main()
	{
		cout << read_and_sum(3) << endl;
		return 0;
	}
}