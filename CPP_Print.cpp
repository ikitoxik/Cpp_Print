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

	//Открытие файла и его проверка 
	fname.open("CPP_Print.cpp");
	if (fname.fail())
	{
		cout << "Извините, открыть файл не удалось!\n";
		return 1;
	}

	//Чтение текста из файла 
	fname.get(ch);
	while (!fname.eof())
	{
		cout << ch;
		fname.get(ch);
	}

	//Закрытие файла
	fname.close();
	return 0;
}