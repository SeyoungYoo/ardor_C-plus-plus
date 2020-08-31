#include <iostream>
using namespace std;

void SwapPointer(int *(&ptr1), int *(&ptr2))
{
	int *temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}

int main(void)
{
	int num1=5;
	int *ptr1=&num1;	// ptr1�� num1�� ����Ű���� �Ѵ�. 
	int num2=10;
	int *ptr2=&num2;	// ptr2�� num2�� ����Ű���� �Ѵ�.
	
	cout<<"���� ptr1�� ����Ű�� ����: "<<*ptr1<<endl;
	cout<<"���� ptr2�� ����Ű�� ����: "<<*ptr2<<endl<<endl;
	
	SwapPointer(ptr1, ptr2);	// ptr1�� ptr2�� ����Ű�� ����� ���� �ٲٴ� �Լ� 
	
	cout<<"�ٲ� ptr1�� ����Ű�� ����: "<<*ptr1<<endl;
	cout<<"�ٲ� ptr2�� ����Ű�� ����: "<<*ptr2<<endl;
	
	return 0;
}
