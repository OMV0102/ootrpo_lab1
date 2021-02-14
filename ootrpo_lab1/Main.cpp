#include "RequestAirTicket.h"
#include "Menu.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Menu::PrintMenu();
	Menu::Split("==aaa=ffffff=k==gg", "=", false);
}