
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите имя: ";
	string name;
	cin >> name;
	cout << "Здравствуйте, " << name;
	return 0;
}
