#include <iostream>

int main(void)
{
	int sell;
	while(1){
		std::cout<<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";	
		std::cin>>sell;
		if(sell==-1){
			std::cout<<"���α׷��� �����մϴ�.";
			break;
		}
		else
			std::cout<<"�̹� �� �޿�: "<<50+sell*0.12<<"����\n";
	}
}
