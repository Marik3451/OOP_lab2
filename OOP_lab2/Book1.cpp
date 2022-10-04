#include "Book1.h"
#include <string>
Book1::Book1()
{
	setAvtor("unknown");
	setName("unknown");
	setVidavn("unknown");
	setK_page(0);
	setYear_vidania(0);
}
string Book1::getAvtor()
{
	return avtor;
}
void Book1::setAvtor(string value)
{
	avtor = value;
}
string Book1::getName()
{
	return name;
}
void Book1::setName(string value)
{
	name = value;
}
string Book1::getVidavn()
{
	return vidavn;
}
void Book1::setVidavn(string value)
{
	vidavn = value;
}
int Book1::getYear_vidania()
{
	return year_vidania;
}
void Book1::setYear_vidania(int value)
{
	year_vidania = value;
}
int Book1::getK_page()
{
	return k_page;
}
void Book1::setK_page(int value)
{
	k_page = value;
}
