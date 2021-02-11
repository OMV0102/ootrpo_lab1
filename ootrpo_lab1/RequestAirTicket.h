#include <vector>
#include <string>
using namespace std;

class RequestAirTicket
{
	public:
	RequestAirTicket();		// �����������
	~RequestAirTicket();	// ����������

	private:				// ��������
	string surname = "";	// �������
	string name = "";		// ���
	string patronymic = "";	// ��������
	string target = "";		// ����� ����������
	unsigned int day = 1;	// ���� (���� ������)
	unsigned int month = 1;	// ����� (���� ������)
	unsigned int year = 2000;// ��� (���� ������)

	public:				// ������
	bool SurnameSet(string surnameNew);
	bool NameSet(string nameNew);
	bool PatronymicSet(string patronymicNew);
	bool DateSet(int dayNew, int monthNew, int yearNew);
	bool DateSet(string dateNew);
	bool CheckDate(int dayNew, int monthNew, int yearNew); // �������� ���� �� ������������

	string SurnameGet();
	string NameGet();
	string PatronymicGet();
	string DateGet();

};
