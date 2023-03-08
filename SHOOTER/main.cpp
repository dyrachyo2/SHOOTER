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
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S')
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A')
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D')
		{
			cout << "Вправо" << endl;
		}
		else if ((int)key != 13)
		{
			cout << "Прыжок" << endl;
		}
		else if ((int)key != 32)
		{
			cout << "Огонь" << endl;
		}

	} while (key != 27);
#endif // SHOOTER


}