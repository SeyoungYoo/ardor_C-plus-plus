#include <iostream> 
using namespace std;

int main(void)
{
	int num=12;
	int *ptr=&num;			// num의 주소를 저장하는 ptr 
	int **dptr=&ptr;		// ptr의 주소를 저장하는 dptr 
	
	int &ref=num;			// num을 참조하는 참조자 ref 
	int *(&pref)=ptr;		// ptr을 참조하는 pref 
	int **(&dpref)=dptr;	// dptr을 참조하는 dpref 
	
	cout<<ref<<endl;		// ref는 num을 참조하므로 num의 값인 12를 출력 
	cout<<*pref<<endl;		// pref는 ptr을 참조하고 ptr에는 num의 주소를 저장하고 있다. 따라서 num에 저장된 12를 출력 
	cout<<**dpref<<endl;	// dpref는 dptr을 참조하고 dptr은 ptr의 주소를, ptr은 num의 주소를 저장하므로 num에 저장된 12를 출력 
	return 0;
}
// 포인터 변수도 변수이기 때문에 참조자의 선언이 가능하다. 
