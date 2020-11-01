#include <iostream>
using namespace std;
typedef struct CONNECTION_DESCRIPTION_1 // это структура без выравнивания и не упорядочена 
{
    int connection_type;
    unsigned long long ip_adress;
    char connection_name[112];
    bool is_connected;
} CONNECTION_DESCRIPTION_1;

#pragma pack(push, 1)
typedef struct CONNECTION_DESCRIPTION_2 //структура с выравниванием и не упорядочена
{
    unsigned long long ip_adress;
    char connection_name[112];
    bool is_connected;
    int connection_type;
} CONNECTION_DESCRIPTION_2;
#pragma pack(pop)

typedef struct CONNECTION_DESCRIPTION_3 // эта структура только упорядочена
{
    char connection_name[112];
    unsigned long long ip_adress;
    int connection_type;
    bool is_connected;
} CONNECTION_DESCRIPTION_3;

void PrintInfoAboutStruct()
{
    CONNECTION_DESCRIPTION_1 connection1;
    CONNECTION_DESCRIPTION_1 connection2;
    CONNECTION_DESCRIPTION_1 connection3;

    cout << "CONNECTION_DESCRIPTION_1: " << endl;
    cout << "CONNECTION_DESCRIPTION_1 ip_adress address is: " << &(connection1.ip_adress) << endl;

    cout << "CONNECTION_DESCRIPTION_1 connection_name address is: " << &(connection1.connection_name) << endl;

    cout << "CONNECTION_DESCRIPTION_1 is_connected address is: " << &(connection1.is_connected) << endl;

    cout << "CONNECTION_DESCRIPTION_1 connection_type address is: " << &(connection1.connection_type) << endl;

    cout << endl << "CONNECTION_DESCRIPTION_2: " << endl;

    cout << "CONNECTION_DESCRIPTION_2 ip_adress address is: " << &(connection2.ip_adress) << endl;

    cout << "CONNECTION_DESCRIPTION_2 connection_name address is: " << &(connection2.connection_name) << endl;

    cout << "CONNECTION_DESCRIPTION_2 is_connected address is: " << &(connection2.is_connected) << endl;

    cout << "CONNECTION_DESCRIPTION_2 connection_type address is: " << &(connection2.connection_type) << endl;

    cout << endl << "CONNECTION_DESCRIPTION_3: " << endl;

    cout << "CONNECTION_DESCRIPTION_3 connection_name address is: " << &(connection3.connection_name) << endl;

    cout << "CONNECTION_DESCRIPTION_3 connection_type address is: " << &(connection3.connection_type) << endl;

    cout << "CONNECTION_DESCRIPTION_3 ip_adress address is: " << &(connection3.ip_adress) << endl;

    cout << "CONNECTION_DESCRIPTION_3 is connected address is: " << &(connection3.is_connected) << endl;

    cout << endl << "CONNECTION_DESCRIPTION_1 sizes: " << endl;

    cout << "CONNECTION_DESCRIPTION_1 sizeof size is: " << sizeof(CONNECTION_DESCRIPTION_1) << endl;

    unsigned int ssize = sizeof(connection1.connection_type) + sizeof(connection1.ip_adress) + sizeof(connection1.connection_name)

        + sizeof(connection1.is_connected);

    cout << "CONNECTION_DESCRIPTION_1 summary size is: " << ssize << endl;

    cout << endl << "CONNECTION_DESCRIPTION_2 sizes: " << endl;

    cout << "CONNECTION_DESCRIPTION_2 sizeof size is: " << sizeof(CONNECTION_DESCRIPTION_2) << endl;

    unsigned int ssize2 = sizeof(connection2.connection_type) + sizeof(connection2.ip_adress) + sizeof(connection2.connection_name)

        + sizeof(connection2.is_connected);

    cout << "CONNECTION_DESCRIPTION_2 summary size is: " << ssize2 << endl;

    cout << endl << "CONNECTION_DESCRIPTION_3 sizes: " << endl;

    cout << "CONNECTION_DESCRIPTION_3 sizeof size is: " << sizeof(CONNECTION_DESCRIPTION_3) << endl;

    unsigned int ssize3 = sizeof(connection3.connection_type) + sizeof(connection3.ip_adress) + sizeof(connection3.connection_name)
        + sizeof(connection3.is_connected);
    cout << "CONNECTION_DESCRIPTION_3 summary size is: " << ssize3 << endl;
}

int main()
{
    PrintInfoAboutStruct();
    cin.get();
    return 0;
}

