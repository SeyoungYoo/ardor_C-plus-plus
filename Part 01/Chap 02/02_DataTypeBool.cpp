#include <iostream> 
using namespace std;

bool IsPositive(int num)
{
	if(num<=0)
		return false;		// �Ű����� num�� 0���� �۰ų� ������ false�� ��ȯ 
	else 
		return true;		// �Ű����� num�� 0���� ũ��  true�� ��ȯ
}

int main(void)
{
	bool isPos;
	int num;
	cout<<"Input number: ";		
	cin>>num;	// ������ �ϳ� �Է¹޾� num�� ���� 
	
	isPos=IsPositive(num); // IsPositive �Լ��� num�� true���� false���� �Ǻ��Ͽ� bool Ÿ�Ժ��� isPos�� ��� ���� 
	if(isPos)
		cout<<"Positive number"<<endl;	
	else
		cout<<"Negative number"<<endl;
		
	return 0;
}
