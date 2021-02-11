#include <vector>
#include <string>
using namespace std;

class RequestAirTicket
{
	public:
	RequestAirTicket();		// конструктор
	~RequestAirTicket();	// деструктор

	private:				// ј“–»Ѕ”“џ
	string surname = "";	// фамили€
	string name = "";		// им€
	string patronymic = "";	// отчество
	string target = "";		// пункт назначени€
	unsigned int day = 1;	// день (даты вылета)
	unsigned int month = 1;	// мес€ц (даты вылета)
	unsigned int year = 2000;// год (даты вылета)

	public:				// методы
	bool SurnameSet(string surnameNew);
	bool NameSet(string nameNew);
	bool PatronymicSet(string patronymicNew);
	bool DateSet(int dayNew, int monthNew, int yearNew);
	bool DateSet(string dateNew);
	bool CheckDate(int dayNew, int monthNew, int yearNew); // проверка даты на корректность

	string SurnameGet();
	string NameGet();
	string PatronymicGet();
	string DateGet();

};
