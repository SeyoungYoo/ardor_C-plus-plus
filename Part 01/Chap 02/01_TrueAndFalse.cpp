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
		if(i>num)		// i�� 10�� ������ ���� 
			break;
	}
	cout<<endl;
	
	cout<<"sizeof 1: "<<sizeof(1)<<endl;		// 1�� 0�� ����Ÿ���̱� ������ ũ�Ⱑ 4����Ʈ�̴�. 
	cout<<"sizeof 0: "<<sizeof(0)<<endl;
	cout<<"sizeof true: "<<sizeof(true)<<endl;	// true�� false�� boolŸ������ ũ�Ⱑ 1����Ʈ�̴�. 
	cout<<"sizeof false: "<<sizeof(false)<<endl;
	return 0;
}
