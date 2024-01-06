#include <iostream>
#include <numeric>
#include "Vector.h"

using namespace std;

namespace Study07
{
	/// <summary>
/// noexcept Ű����� ���� �߻��� ���α׷� �����
/// noexcept Ű���带 ������� ������ ���� �߻��� try catch �� ����
/// </summary>
/// <param name="v"></param>
	void user(Vector& v) noexcept
	{
		iota(&v[0], &v[v.size()], 1);
	}
}

int main()
{
	Vector v(3);
	try
	{
		Study07::user(v);		
		std::cout << v[5] << std::endl;
	}
	catch (std::out_of_range& err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unknown error" << std::endl;
	}

	return 0;
}