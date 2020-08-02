#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout<<"So simple function!"<<std::endl;
		std::cout<<"In namespace Hybrid!"<<std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc;	// HybFunc를 이름공간 Hybrid에서 찾으라는 선언 
	HybFunc();
	return 0;
}
