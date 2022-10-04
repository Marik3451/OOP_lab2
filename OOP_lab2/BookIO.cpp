#include "BookIO.h"

void BookIO::Input(Book1& boo)
{
	cout << "\n\tВведіть автора книги: ";
	std::string avtor;
	getline(cin, avtor);
	boo.setAvtor(avtor);

	cout << "\tВведіть назву книги: ";
	std::string name;
	getline(cin, name);
	boo.setName(name);

	cout << "\tВведіть видавництво книги: ";
	std::string vidavn;
	getline(cin, vidavn);
	boo.setVidavn(vidavn);


	cout << "\tВведіть рік видання: ";
	string year;
	getline(cin, year);
	boo.setYear_vidania(stoi(year));

	cout << "\tВведіть к-сть сторінок: ";
	string page;
	getline(cin, page);
	boo.setK_page(stoi(page));

	cout << endl;
}

void BookIO::Output(Book1& boo)
{
	cout << "\tАвтор: " << boo.getAvtor() << endl;
	cout << "\tНазва книги: " << boo.getName() << endl;
	cout << "\tВидавництво книги: " << boo.getVidavn() << endl;
	cout << "\tРік видання: " << boo.getYear_vidania() << endl;
	cout << "\tК-сть сторінок: " << boo.getK_page() << endl << endl;
}
