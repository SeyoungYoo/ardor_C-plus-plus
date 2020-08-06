 #include <iostream>
 using namespace std;
 
 int main(void)
 {
 	int num1=1020;
 	int &num2=num1;		// num1에 대한 참조자 num2 선언 
 	
 	num2=3047;		// 참조자인 num2의 값을 바꾸면 num1의 값도 변한다. 
 	cout<<"VAL: "<<num1<<endl;	// 3047로 출력 
 	cout<<"REF: "<<num2<<endl;	// 3047로 출력 
 	
 	cout<<"VAL: "<<&num1<<endl;	// num1의 주소값 출력 
 	cout<<"REF: "<<&num2<<endl;	// num2의 주소값 출력
	// num1과 num2는 동일한 메모리 공간을 가리키므로 주소값이 동일하다. 
 	return 0;
 }
