#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char ch = 0;
	ifstream fname;

	//�������� ����� � ��� �������� 
	fname.open("CPP_Print.cpp");
	if (fname.fail())
	{
		cout << "��������, ������� ���� �� �������!\n";
		return 1;
	}

	//������ ������ �� ����� 
	fname.get(ch);
	while (!fname.eof())
	{
		cout << ch;
		fname.get(ch);
	}

	//�������� �����
	fname.close();
	return 0;
}