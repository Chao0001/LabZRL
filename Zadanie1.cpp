#include <iostream>
using namespace std;
int pglobal = 162;

void inf()
{
	setlocale(LC_ALL, "ru");
	int pauto = 695;
	int* pdynamic = new int;
	*pdynamic = 2347;

	cout << "����� ���������� ����������: " << &pglobal << " ��������: " << pglobal << endl;
	cout << "����� �������������� ����������: " << &pauto << " ��������: " << pauto << endl;
	cout << "����� ������������ ����������: " << pdynamic << " ��������: " << *pdynamic << endl;

	delete pdynamic;
}

int main()
{
	inf();
	system("pause>null");
	return 0;
}
