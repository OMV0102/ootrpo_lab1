#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


class Menu
{
	public:
	Menu();
	~Menu();

	private:

	public:
	static void PrintMenu();

	public:
	// ��������� ������ �� ��������� �� ����������� (���� ��������� ��������� ������ ���������)
	static vector<string> Split(string str, string separator, bool isAddNullStr);
};
