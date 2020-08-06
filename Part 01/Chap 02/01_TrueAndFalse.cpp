#include <iostream>
using namespace std;

int main(void)
{
	int num=10;
	int i=0;
	
	cout<<"true: "<<true<<endl;
	cout<<"false: "<<false<<endl;
	
	while(true)	
	{
		cout<<i++<<' ';
		if(i>num)		// i가 10을 넘으면 종료 
			break;
	}
	cout<<endl;
	
	cout<<"sizeof 1: "<<sizeof(1)<<endl;		// 1과 0은 정수타입이기 때문에 크기가 4바이트이다. 
	cout<<"sizeof 0: "<<sizeof(0)<<endl;
	cout<<"sizeof true: "<<sizeof(true)<<endl;	// true와 false는 bool타입으로 크기가 1바이트이다. 
	cout<<"sizeof false: "<<sizeof(false)<<endl;
	return 0;
}
