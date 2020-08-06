#include <iostream> 
using namespace std;

int main(void)
{
	int arr[3]={1,3,5};
	int &ref1=arr[0];	// 배열의 요소는 변수로 간주되어 참조자 선언이 가능하다.
	int &ref2=arr[1];
	int &ref3=arr[2];
	
	cout<<ref1<<endl;
	cout<<ref2<<endl;
	cout<<ref3<<endl;
	return 0;
}
/*
참조자의 선언 가능 범위
-참조자는 변수에 대해서만 선언이 가능하고, 선언됨과 동시에 누군가를 참조해야만한다.
-참조자를 선언하면서 상수와 null로 초기화할 수 없다.
*/ 
