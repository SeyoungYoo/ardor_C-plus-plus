#include <iostream>
// cin, cout, endl에 대해서 이름공간 지정이 불필요하게 using을 이용한다. 
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int num=20;
	cout<<"Hello World!"<<endl;
	cout<<"Hello "<<"World!"<<endl;
	cout<<num<<' '<<'A';
	cout<<' '<<3.14<<endl;
	return 0;
}
