#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)	// �� ������ ref1, ref2�� ����� ���� ��ȯ�ϴ� �Լ� ���� 
{
	int temp=ref1;	// temp�� ref1�� �ִ� ���� �־��ְ� 
	ref1=ref2;		// ref1�� ref2�� �ְ� 
	ref2=temp;		// ref2�� temp�� �ִ� ref1�� �־� ���������� ref1�� ref2�� ��ȯ�Ѵ�. 
}

int main(void)
{
	int val1=10;
	int val2=20;
	
	SwapByRef2(val1, val2);		// SwapByRef2()�Լ��� ���� val1, val2�� �ִ� ���� ��ȯ�Ѵ�. 
	cout<<"val1: "<<val1<<endl;
	cout<<"val2: "<<val2<<endl;
	return 0;
}
