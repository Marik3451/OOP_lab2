#pragma once
#include <string>
using namespace std;
class Book1
{
private:
	string avtor;
	string name;
	string vidavn;
	int year_vidania;
	int k_page;
public:
	Book1();
	string getAvtor();
	void setAvtor(string value);
	string getName();
	void setName(string value);
	string getVidavn();
	void setVidavn(string value);
	int getYear_vidania();
	void setYear_vidania(int value);
	int getK_page();
	void setK_page(int value);
};
