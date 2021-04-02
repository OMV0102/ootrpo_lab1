#include "Menu.h"
#include <string>
using namespace std;

Menu::Menu() {}

Menu::~Menu() {}

void Menu::PrintMenu()
{
	cout << "Меню:" << endl;
	cout << "<1> Загрузить данные из файла;" << endl;
	cout << "<2> Добавить данные из файла к загруженным;" << endl;
	cout << "<3> Добавить данные c клавиатуры;" << endl;
	cout << "<4> Вывести данные на экран построчно;" << endl;
	cout << "<5> Вывести данные в файл построчно;" << endl;
	cout << "<6> Удалить запись;" << endl;
	cout << "<0> ВЫХОД" << endl;
	cout << "ВЫБРАН: ";
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