#include <iostream>
using namespace std;

namespace Study03
{
	class Vector {
	public:
		Vector(int s) : elem{ new double[s] }, sz{ s } { }
		double& operator[](int i) { return elem[i]; }
		int size() { return sz; }

	private:
		double* elem;
		int sz;
	};

	double read_and_sum(int s)
	{
		Vector v(s);

		for (auto i = 0; i < v.size(); i++)
			cin >> v[i];

		double sum = 0;
		for (auto i = 0; i < v.size(); i++)
			sum += v[i];

		return sum;
	}
}


int main()
{
	cout << Study03::read_and_sum(3) << endl;
	return 0;
}