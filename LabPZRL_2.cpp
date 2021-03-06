#include <iostream>

using namespace std;

void inf()
{
	setlocale(LC_ALL, "ru");
	int StaticSingleMassive[3];
	int StaticDoubleMassive[3][3];

	int *DynamicSingleMassive = new int[10];
	int ** DynamicDoubleMassive = new int*[3];
	for (int i = 0; i < 3; ++i)
	DynamicDoubleMassive[i] = new int[3];

	cout << "Static Single Massive Adress:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << &(StaticSingleMassive[i]) << " ";
	}
	cout << endl << endl;

	cout << "Dynamic Single Massive Adress:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << &(DynamicSingleMassive[i]) << " ";
	}
	cout << endl << endl;

	cout << "Static Double Massive Adress:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << &(StaticDoubleMassive[i][j]) << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Dynamic Double Massive Adress:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int k = 0; k < 3; ++k)
		{
			cout << &(DynamicDoubleMassive[i][k]) << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; ++i)
	delete[] DynamicDoubleMassive[i];
	delete[] DynamicDoubleMassive;
	delete[] DynamicSingleMassive;
}

int main()
{
	inf();
	system("pause>nul");
}
