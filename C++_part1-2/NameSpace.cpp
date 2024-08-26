#include <iostream>

namespace Ns1 { int a = 10; }
namespace Ns2 { int a = 20; }
int a = 30; // 전역변수
namespace Ns1 { int b = 50; }
int main()
{
	int a = 40;
	std::cout << Ns1::a << std::endl;
	std::cout << Ns2::a << std::endl;
	std::cout << ::a << std::endl;
	std::cout << a << std::endl;
	std::cout << Ns1::b << std::endl;
}

/*
	결과
	10
	20
	30
	40
	50
*/