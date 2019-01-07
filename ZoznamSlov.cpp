#include "ZoznamSlov.h"



ZoznamSlov::ZoznamSlov()
{
}


ZoznamSlov::~ZoznamSlov()
{
	for (auto &p : zoznamSlov)
	{
		delete p;

	}
	zoznamSlov.clear();
}

void ZoznamSlov::nacitajZoznam(const char * menoSuboru)
{
	string slovo ;
	ifstream cin(menoSuboru);
	while (cin >> slovo)
	{
		if (slovo.length()<51)
		zoznamSlov.push_back(new Slovo(slovo));
	}
}

bool wayToSort(Slovo *s1, Slovo *s2) { return s1->dajPocetPismen() > s2->dajPocetPismen(); };
void ZoznamSlov::vypisNaKonzolu()
{
	sort(zoznamSlov.begin(), zoznamSlov.end(), wayToSort);
	for (int i = 0; i < zoznamSlov.size(); ++i)
	{
		cout << zoznamSlov[i]->getSlovo() << endl;
	}
	cout << "-------------------------------------------"<<endl;

	vector <Slovo*> pomZoznamSlov;
	int index = 0;
	int pocitadlo = 1;
	pomZoznamSlov.push_back(zoznamSlov[0]);
	while (index != 3 && pocitadlo != zoznamSlov.size())
	{
		//zoznamSlov[pocitadlo - 1]->getSlovo().compare(zoznamSlov[pocitadlo]->getSlovo()) == 0
			if (zoznamSlov[pocitadlo - 1]->getSlovo().compare(zoznamSlov[pocitadlo]->getSlovo()) == 0)
				pomZoznamSlov.push_back(zoznamSlov[pocitadlo]);
			else
			{
				if(index<2)
				pomZoznamSlov.push_back(zoznamSlov[pocitadlo]);

				index++;
			}
  	 	   pocitadlo++;
	}
	for (int i = 0; i < pomZoznamSlov.size(); ++i)
	{
		cout << pomZoznamSlov[i]->getSlovo() << endl;
	}
}
