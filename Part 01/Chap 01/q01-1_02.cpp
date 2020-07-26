#include <iostream>

int main(void)
{
	char name[100] ;
	char tel[100];
	std::cout<<"이름: ";
	std::cin>>name;
	std::cout<<"전화번호: ";
	std::cin>>tel;
	std::cout<<"이름: "<<name<<" 전화번호: " <<tel;
}
