#include <iostream> 
using namespace std;

int AddOne(int &ref)	// 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수 
{
	return ref+1;
}

int ChangeSign(int &ref)	// 인자로 전달된 int형 변수의 부호를 바꾸는 함수 
{
	return ref*(-1);
}

int main(void)
{
	int val1=10;
	int val2=20;
	
	cout<<"원래 val1: "<<val1<<endl;
	cout<<"원래 val2: "<<val2<<endl<<endl;
	 
	cout<<"val1+1 = "<<AddOne(val1)<<endl;
	cout<<"val2의 부호 바꾸기 : "<<ChangeSign(val2)<<endl;
	return 0;
}
