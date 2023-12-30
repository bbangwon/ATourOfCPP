#include<iostream>
#include<vector>

using namespace std;

vector<int> vec;

struct Record {
	int age;
	string name;
};


double square(double x)
{
	return x * x;
}

void print_square(double x)
{
	cout << "the square of " << x << " is " << square(x) << "\n";
}

constexpr double nth(double x, int n)
{
	return n == 0 ? 1 : x * nth(x, n - 1);
}

void copy_fct()
{
	int v1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int v2[10];

	for (auto i = 0; i != 10; ++i)
		v2[i] = v1[i];

	for (auto x : v2)
		cout << x << "\n";

	for (auto& x : v2)
		++x;

	for (auto x : v2)
		cout << x << "\n";

	for (auto x : {10, 20, 30})
		cout << x << "\n";
}

int main()
{
	print_square(1.234);	

	string motto = "Who dares wins";
	auto p = new Record { 10, "Hume" };

	cout << "motto: " << motto << "\n";
	cout << "p->name: " << p->name << "\n";
	cout << "p->age: " << p->age << "\n";

	cout << "nth(2, 3): " << nth(2, 3) << "\n";

	copy_fct();
}