#include <iostream>
#include <numeric>
#include "Vector.h"

using namespace std;

namespace Study07
{
	/// <summary>
/// noexcept 키워드로 에러 발생시 프로그램 종료됨
/// noexcept 키워드를 사용하지 않으면 에러 발생시 try catch 로 잡힘
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