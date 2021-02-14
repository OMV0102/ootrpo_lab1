#include "RequestAirTicket.h"


RequestAirTicket::RequestAirTicket(){}

RequestAirTicket::~RequestAirTicket(){}

bool RequestAirTicket::SurnameSet(string surnameNew)
{
	if(surnameNew.empty())
		return false;
	this->surname = surnameNew;
	return true;
}

bool RequestAirTicket::NameSet(string nameNew)
{
	if(nameNew.empty())
		return false;
	this->name = nameNew;
	return true;
}

bool RequestAirTicket::PatronymicSet(string patronymicNew)
{
	if(patronymicNew.empty())
		return false;
	this->patronymic = patronymicNew;
	return true;
}

bool RequestAirTicket::DateSet(int dayNew, int monthNew, int yearNew)
{
    if(this->CheckDate(dayNew, monthNew, yearNew))
    {
        this->day = dayNew;
        this->month = monthNew;
        this->year = yearNew;
        return true;
    }
    else
        return false;
}

bool RequestAirTicket::DateSet(string dateNew)
{
	if(dateNew.empty())
		return false;
	int dayNew = 1, monthNew = 1, yearNew = 1;
	sscanf(dateNew.c_str(), "%4d-%2d-%2d", yearNew, monthNew, dayNew);
	return this->DateSet(dayNew, monthNew, yearNew);
}

// �������� ���� �� ������������
bool RequestAirTicket::CheckDate(int dayNew, int monthNew, int yearNew)
{
    if(yearNew < 0)
        return false;

    switch(monthNew)
    {
        // ������ � 31 ����
        case 1:  // ������
        case 3:  // ����
        case 5:  // ���
        case 7:  // ����
        case 8:  // ������
        case 10: // �������
        case 12: // �������
            if(1 < dayNew || dayNew > 31)
                return false;
            else
                return true;
        
        // ������ � 30 �����
        case 4:  // ������
        case 6:  // ����
        case 9:  // ��������
        case 11: // ������
            if(1 < dayNew || dayNew > 30)
                return false;
            else
                return true;

        // �������
        case 2:
            // ��� ����������: ���� ������ 400, ���� ������ 4 � �� ������ 100
            if(yearNew % 400 == 0 || (yearNew % 4 == 0 && yearNew % 100 != 0))
                if(1 < dayNew || dayNew > 29)
                    return false;
                else
                    return true;
            else
                if(1 < dayNew || dayNew > 28)
                    return false;
                else
                    return true;

        default:
            return false;
    }

    return true;
}

string RequestAirTicket::SurnameGet()
{
    return this->surname;
}
string RequestAirTicket::NameGet()
{
    return this->name;
}
string RequestAirTicket::PatronymicGet()
{
    return this->patronymic;
}
string RequestAirTicket::DateGetString()
{
    char *str = NULL;
    sprintf(str, "%4d-%2d-%2d", this->year, this->month, this->day);
    return string(str);
}

