 #include <iostream>
 using namespace std;
 
 int main(void)
 {
 	int num1=1020;
 	int &num2=num1;		// num1�� ���� ������ num2 ���� 
 	
 	num2=3047;		// �������� num2�� ���� �ٲٸ� num1�� ���� ���Ѵ�. 
 	cout<<"VAL: "<<num1<<endl;	// 3047�� ��� 
 	cout<<"REF: "<<num2<<endl;	// 3047�� ��� 
 	
 	cout<<"VAL: "<<&num1<<endl;	// num1�� �ּҰ� ��� 
 	cout<<"REF: "<<&num2<<endl;	// num2�� �ּҰ� ���
	// num1�� num2�� ������ �޸� ������ ����Ű�Ƿ� �ּҰ��� �����ϴ�. 
 	return 0;
 }
