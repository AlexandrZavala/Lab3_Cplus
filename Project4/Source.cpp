#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);	//���� � ������� ��������
	char txt[255];
	char glas[] = "���娸��������������";	//������ �������
	cout << "Enter text: ";	
	cin.getline(txt, 255);//�������� ������ � �������
	char *p = txt;//��������� �� ������ ������ � ������
	int col = 0;//������� ��������
	while (*p)//���� �� ��������� ����� ������
	{
		if (strchr(glas, *p)) 
		{
			col++;//��������� ������� ������� � ������� ������� ���� �� ����������� �������
			p++;//��������� �� ������ ������
		}
		
	}

	cout << col << endl; //������� ���������
	return 0;
}