#include <iostream>

using namespace std;

struct sVector
{
	int sz;
	double* elem;
};

void vector_init(sVector& v, int s)
{
	v.elem = new double[s];
	v.sz = s;
}

double read_and_sum(int s)
{
	sVector v;
	vector_init(v, s);

	for(auto i = 0; i < s; i++)
		cin >> v.elem[i];

	double sum = 0;
	for(auto i = 0;i < s;i++)
		sum += v.elem[i];

	return sum;
}

void main_struct()
{
	cout << read_and_sum(3) << endl;
}
