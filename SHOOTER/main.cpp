#include<iostream>
#include<conio.h>
using namespace std;
//#define SHOOTER
void main()
{
	setlocale(LC_ALL, "");

#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();

		if (key == 'w' || key == 'W')
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A')
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "������" << endl;
		}
		else if ((int)key != 13)
		{
			cout << "������" << endl;
		}
		else if ((int)key != 32)
		{
			cout << "�����" << endl;
		}

	} while (key != 27);
#endif // SHOOTER


}