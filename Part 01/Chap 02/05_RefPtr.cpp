#include <iostream> 
using namespace std;

int main(void)
{
	int num=12;
	int *ptr=&num;			// num�� �ּҸ� �����ϴ� ptr 
	int **dptr=&ptr;		// ptr�� �ּҸ� �����ϴ� dptr 
	
	int &ref=num;			// num�� �����ϴ� ������ ref 
	int *(&pref)=ptr;		// ptr�� �����ϴ� pref 
	int **(&dpref)=dptr;	// dptr�� �����ϴ� dpref 
	
	cout<<ref<<endl;		// ref�� num�� �����ϹǷ� num�� ���� 12�� ��� 
	cout<<*pref<<endl;		// pref�� ptr�� �����ϰ� ptr���� num�� �ּҸ� �����ϰ� �ִ�. ���� num�� ����� 12�� ��� 
	cout<<**dpref<<endl;	// dpref�� dptr�� �����ϰ� dptr�� ptr�� �ּҸ�, ptr�� num�� �ּҸ� �����ϹǷ� num�� ����� 12�� ��� 
	return 0;
}
// ������ ������ �����̱� ������ �������� ������ �����ϴ�. 
