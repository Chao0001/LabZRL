#include <iostream>
using namespace std;
int pglobal = 162;

void inf()
{
	setlocale(LC_ALL, "ru");
	int pauto = 695;
	int* pdynamic = new int;
	*pdynamic = 2347;

	cout << "Адрес глобальной переменной: " << &pglobal << " значение: " << pglobal << endl;
	cout << "Адрес автоматической переменной: " << &pauto << " значение: " << pauto << endl;
	cout << "Адрес динамической переменной: " << pdynamic << " значение: " << *pdynamic << endl;

	delete pdynamic;
}

int main()
{
	inf();
	system("pause>null");
	return 0;
}
