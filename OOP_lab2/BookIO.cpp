#include "BookIO.h"

void BookIO::Input(Book1& boo)
{
	cout << "\n\t������ ������ �����: ";
	std::string avtor;
	getline(cin, avtor);
	boo.setAvtor(avtor);

	cout << "\t������ ����� �����: ";
	std::string name;
	getline(cin, name);
	boo.setName(name);

	cout << "\t������ ����������� �����: ";
	std::string vidavn;
	getline(cin, vidavn);
	boo.setVidavn(vidavn);


	cout << "\t������ �� �������: ";
	string year;
	getline(cin, year);
	boo.setYear_vidania(stoi(year));

	cout << "\t������ �-��� �������: ";
	string page;
	getline(cin, page);
	boo.setK_page(stoi(page));

	cout << endl;
}

void BookIO::Output(Book1& boo)
{
	cout << "\t�����: " << boo.getAvtor() << endl;
	cout << "\t����� �����: " << boo.getName() << endl;
	cout << "\t����������� �����: " << boo.getVidavn() << endl;
	cout << "\tг� �������: " << boo.getYear_vidania() << endl;
	cout << "\t�-��� �������: " << boo.getK_page() << endl << endl;
}
