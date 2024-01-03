#include<iostream>
#include<vector>

using namespace std;

namespace Study01
{
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

		for (auto x : { 10, 20, 30 })
			cout << x << "\n";
	}

	int count_x(const char* p, char x)
	{
		if (p == nullptr)
			return 0;

		int count = 0;
		while (*p) {
			if (*p == x)
				++count;
			++p;
		}
		return count;
	}

	bool accept()
	{
		cout << "계속 할까요?(y/n)\n";
		char answer = 0;

		cin >> answer;
		switch (answer)
		{
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			cout << "거부한 것으로 받아들입니다.\n";
			return false;
		}

	}

	int main()
	{
		cout << count_x("Hello, World!", 'l') << endl;

		//if 안에서 선언하는 것은 스코프 제한 (c++17)
		if (int x = 1; x == 1) {
			cout << "x: " << x << "\n";
		}

		int x = 2;

		accept();

		//print_square(1.234);	

		//string motto = "Who dares wins";
		//auto p = new Record { 10, "Hume" };

		//cout << "motto: " << motto << "\n";
		//cout << "p->name: " << p->name << "\n";
		//cout << "p->age: " << p->age << "\n";

		//cout << "nth(2, 3): " << nth(2, 3) << "\n";

		//copy_fct();

		return 0;
	}
}