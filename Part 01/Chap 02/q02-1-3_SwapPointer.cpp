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
	int *ptr1=&num1;	// ptr1이 num1을 가리키도록 한다. 
	int num2=10;
	int *ptr2=&num2;	// ptr2이 num2을 가리키도록 한다.
	
	cout<<"기존 ptr1이 가리키던 숫자: "<<*ptr1<<endl;
	cout<<"기존 ptr2이 가리키던 숫자: "<<*ptr2<<endl<<endl;
	
	SwapPointer(ptr1, ptr2);	// ptr1과 ptr2가 가리키는 대상을 서로 바꾸는 함수 
	
	cout<<"바뀐 ptr1이 가리키는 숫자: "<<*ptr1<<endl;
	cout<<"바뀐 ptr2이 가리키는 숫자: "<<*ptr2<<endl;
	
	return 0;
}
