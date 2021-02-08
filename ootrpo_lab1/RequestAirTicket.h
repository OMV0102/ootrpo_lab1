#include <vector>
using namespace std;

class RequestAirTicket
{
	public:
	RequestAirTicket();		// конструктор
	~RequestAirTicket();	// деструктор

	private:			// АТРИБУТЫ
	string surname;		// фамилия
	string name;		// имя
	string patronymic;	// отчество
	string target;		// пункт назначения
	unsigned int day;	// день (даты вылета)
	unsigned int month;	// месяц (даты вылета)
	unsigned int year;	// год (даты вылета)

	private:			// МЕТОДЫ
	void SurnameSet(string surnameNew);
	void NameSet(string nameNew);
	void PatronymicSet(string patronymicNew);
	void DateSet(int dayNew, int monthNew, int yearNew);
	void DateSet(string dateNew);

	string SurnameGet();
	string NameGet();
	string PatronymicGet();
	string DateGet();

};
