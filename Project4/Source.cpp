#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);	//ввод с консоли кирилицы
	char txt[255];
	char glas[] = "ја≈е®Є»иќо”уџыЁэёюя€";	//массив гласных
	cout << "Enter text: ";	
	cin.getline(txt, 255);//получаем строку с консоли
	char *p = txt;//указатель на первый символ в строке
	int col = 0;//счетчик глассных
	while (*p)//пока не достигнут конец строки
	{
		if (strchr(glas, *p)) 
		{
			col++;//провер€ем наличие символа в массиве гласных если да увеличиваем счетчик
			p++;//переходим на другой символ
		}
		
	}

	cout << col << endl; //выводим результат
	return 0;
}