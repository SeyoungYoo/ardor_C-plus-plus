#include <iostream> 
using namespace std;

int AddOne(int &ref)	// ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ� 
{
	return ref+1;
}

int ChangeSign(int &ref)	// ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ� 
{
	return ref*(-1);
}

int main(void)
{
	int val1=10;
	int val2=20;
	
	cout<<"���� val1: "<<val1<<endl;
	cout<<"���� val2: "<<val2<<endl<<endl;
	 
	cout<<"val1+1 = "<<AddOne(val1)<<endl;
	cout<<"val2�� ��ȣ �ٲٱ� : "<<ChangeSign(val2)<<endl;
	return 0;
}
