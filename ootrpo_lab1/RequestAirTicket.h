#include <vector>
using namespace std;

class RequestAirTicket
{
	public:
	RequestAirTicket();		// �����������
	~RequestAirTicket();	// ����������

	private:			// ��������
	string surname;		// �������
	string name;		// ���
	string patronymic;	// ��������
	string target;		// ����� ����������
	unsigned int day;	// ���� (���� ������)
	unsigned int month;	// ����� (���� ������)
	unsigned int year;	// ��� (���� ������)

	private:			// ������
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
