#include "Menu.h"
#include <string>
using namespace std;

Menu::Menu() {}

Menu::~Menu() {}

void Menu::PrintMenu()
{
	cout << "����:" << endl;
	cout << "<1> ��������� ������ �� �����;" << endl;
	cout << "<2> �������� ������ �� ����� � �����������;" << endl;
	cout << "<3> �������� ������ c ����������;" << endl;
	cout << "<4> ������� ������ �� ����� ���������;" << endl;
	cout << "<5> ������� ������ � ���� ���������;" << endl;
	cout << "<6> ������� ������;" << endl;
	cout << "<0> �����" << endl;
	cout << "������: ";
}

vector<string> Menu::Split(string str, string separator, bool isAddNullStr)
{
    size_t pos = 0;
    string substring;
    vector<string> list_split;
    while((pos = str.find(separator)) != string::npos)
    {
        substring = str.substr(0, pos);
        if(isAddNullStr == false)
            {if(substring.length() > 0) list_split.push_back(substring);}
        else
            list_split.push_back(substring);
        str.erase(0, pos + separator.length());
    }
    if(isAddNullStr == false)
        {if(str.length() > 0) list_split.push_back(str);}
    else
        list_split.push_back(str);
    return list_split;
}