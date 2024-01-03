#include <iostream>

using namespace std;

namespace Study04
{
	namespace Hello
	{
		void print()
		{
			cout << "Hello" << endl;
		}
	
	}
	enum Color { red, blue, yellow };
	enum class TrafficLight { green, yellow, red };

	//TrafficLight& operator++(TrafficLight& t); 전위 증가 연산자
	TrafficLight& operator++(TrafficLight& t)
	{
		switch (t)
		{
		case TrafficLight::red:
			return t = TrafficLight::green;
		case TrafficLight::yellow:
			return t = TrafficLight::red;
		case TrafficLight::green:
			return t = TrafficLight::yellow;			
		default:
			break;
		}

		return t;
	}

	int main()
	{
		Study04::Color col = Study04::Color::red;

		Study04::Color col2 = Study04::blue;

		int x = col2;	//int 로 변경하려면 enum

		Study04::TrafficLight light1 = Study04::TrafficLight{ 2 };	//가능하지만 권장하지 않음

		Study04::TrafficLight light2 = Study04::TrafficLight::red;

		++light2;


		Study04::Hello::print();


		return 0;
	}
}

