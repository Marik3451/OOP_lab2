#include <conio.h>
#include"Library.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Library library;
	library.FillBook();
	library.Show();
	library.ShowByAvtor();
	library.ShowByName();
	library.ShowByVidavn();
	library.ShowByYear_vidania();
}