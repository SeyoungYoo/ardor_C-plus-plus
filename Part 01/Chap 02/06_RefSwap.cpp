#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)	// 두 참조자 ref1, ref2에 저장된 값을 교환하는 함수 정의 
{
	int temp=ref1;	// temp에 ref1에 있는 값을 넣어주고 
	ref1=ref2;		// ref1에 ref2을 넣고 
	ref2=temp;		// ref2에 temp에 있던 ref1을 넣어 최종적으로 ref1과 ref2를 교환한다. 
}

int main(void)
{
	int val1=10;
	int val2=20;
	
	SwapByRef2(val1, val2);		// SwapByRef2()함수를 통해 val1, val2에 있던 값을 교환한다. 
	cout<<"val1: "<<val1<<endl;
	cout<<"val2: "<<val2<<endl;
	return 0;
}
