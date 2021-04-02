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
	// –аздел€ет строку на подстроки по разделителю (флаг указывает добавл€ть пустые подстроки)
	static vector<string> Split(string str, string separator, bool isAddNullStr);
};
