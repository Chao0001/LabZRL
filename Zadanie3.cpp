#include <iostream>
using namespace std;

typedef struct MYSTRUCT1
{
	unsigned int	ipadress;
	char			connectionname[100];
	bool			isconnected;
	int				connectiontype;
} MYSTRUCT1;

#pragma pack(push, 1)
typedef struct MYSTRUCT2
{
	unsigned int	ipadress;
	char			connectionname[100];
	bool			isconnected;
	int				connectiontype;
} MYSTRUCT2;
#pragma pack(pop)

typedef struct MYSTRUCT3
{
	unsigned int	ipadress;
	char			connectionname[100];
	bool			isconnected;
	int				connectiontype;
} MYSTRUCT3;

void PrintInfoAboutStruct()
{
	MYSTRUCT1	connection1;
	MYSTRUCT2	connection2;
	MYSTRUCT3	connection3;

	cout << "MYSTRUCT1: " << endl;

	cout << "MYSTRUCT1 ip_adress address is: " << &(connection1.ipadress) << endl;
	cout << "MYSTRUCT1 connection_name address is: " << &(connection1.connectionname) << endl;
	cout << "MYSTRUCT1 is_connected address is: " << &(connection1.isconnected) << endl;
	cout << "MYSTRUCT1 connection_type address is: " << &(connection1.connectiontype) << endl;

	cout << endl << "MYSTRUCT2: " << endl;

	cout << "MYSTRUCT2 ip_adress address is: " << &(connection2.ipadress) << endl;
	cout << "MYSTRUCT2 connection_name address is: " << &(connection2.connectionname) << endl;
	cout << "MYSTRUCT2 is_connected address is: " << &(connection2.isconnected) << endl;
	cout << "MYSTRUCT2 connection_type address is: " << &(connection2.connectiontype) << endl;

	cout << endl << "MYSTRUCT3: " << endl;

	cout << "MYSTRUCT3 connection_name address is: " << &(connection3.connectionname) << endl;
	cout << "MYSTRUCT3 connection_type address is: " << &(connection3.connectiontype) << endl;
	cout << "MYSTRUCT3 ip_adress address is: " << &(connection3.ipadress) << endl;
	cout << "MYSTRUCT3 is connected address is: " << &(connection3.isconnected) << endl;

	cout << endl << "MYSTRUCT1 sizes: " << endl;

	cout << "MYSTRUCT1 sizeof size is: " << sizeof(MYSTRUCT1) << endl;
	unsigned int ssize = sizeof(connection1.connectiontype) + sizeof(connection1.ipadress) + sizeof(connection1.connectionname)
		+ sizeof(connection1.isconnected);
	cout << "MYSTRUCT1 summary size is: " << ssize << endl;

	cout << endl << "MYSTRUCT2 sizes: " << endl;

	cout << "MYSTRUCT2 sizeof size is: " << sizeof(MYSTRUCT2) << endl;
	unsigned int ssize2 = sizeof(connection2.connectiontype) + sizeof(connection2.ipadress) + sizeof(connection2.connectionname)
		+ sizeof(connection2.isconnected);
	cout << "MYSTRUCT2 summary size is: " << ssize2 << endl;

	cout << endl << "MYSTRUCT3 sizes: " << endl;

	cout << "MYSTRUCT3 sizeof size is: " << sizeof(MYSTRUCT3) << endl;
	unsigned int ssize3 = sizeof(connection3.connectiontype) + sizeof(connection3.ipadress) + sizeof(connection3.connectionname)
		+ sizeof(connection3.isconnected);
	cout << "MYSTRUCT3 summary size is: " << ssize3 << endl;
}

int main()
{
	PrintInfoAboutStruct();
	cin.get();
	return 0;
}
