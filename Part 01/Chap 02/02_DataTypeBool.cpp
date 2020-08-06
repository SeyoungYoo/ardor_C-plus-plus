#include <iostream> 
using namespace std;

bool IsPositive(int num)
{
	if(num<=0)
		return false;		// 매개변수 num이 0보다 작거나 같으면 false를 반환 
	else 
		return true;		// 매개변수 num이 0보다 크면  true를 반환
}

int main(void)
{
	bool isPos;
	int num;
	cout<<"Input number: ";		
	cin>>num;	// 정수를 하나 입력받아 num에 저장 
	
	isPos=IsPositive(num); // IsPositive 함수로 num이 true인지 false인지 판별하여 bool 타입변수 isPos에 결과 저장 
	if(isPos)
		cout<<"Positive number"<<endl;	
	else
		cout<<"Negative number"<<endl;
		
	return 0;
}
