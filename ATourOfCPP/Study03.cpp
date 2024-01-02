#include <iostream>
#include <variant>
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

	union Value {
		Vector* p;
		int i;
	};

	struct Entry {
		string name;
		variant<Vector*, int> v;	//union과 비슷한 역할을 하는 variant
		Value v2;
	};

	void f(Entry* pe)
	{
		if (holds_alternative<int>(pe->v))	// *pe가 int를 가지고 있으면
			cout << "f: pe == (int): " << get<int>(pe->v);	// int를 출력
		else if (holds_alternative<Vector*>(pe->v))	// *pe가 Vector*를 가지고 있으면
			cout << "f: pe == (Vector*): " << get<Vector*>(pe->v);	// Vector*를 출력
	}

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

int main_03()
{
	//cout << Study03::read_and_sum(3) << endl;

	Study03::Vector v(3);

	Study03::Entry e{ "entry", 10 };
	e.v2.p = &v;

	Study03::f(&e);
	return 0;
}
