#include "RequestAirTicket.h"
#include "Menu.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int number = -1;
	bool flag = true;
	RequestAirTicket r;

	bool b = true;
	b = r.CheckDate(3, 5, 2020);
	/*while(flag == true)
	{
		switch(number)
		{
			case 1:
				r.DateSet("22-06-09");
				break;
			case 0:
				flag = false;
				break;
			default:
				cout << endl;
				Menu::PrintMenu();
				break;
		}
		cin >> number;
	}*/
	//Menu::PrintMenu();
}