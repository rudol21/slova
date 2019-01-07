#pragma once
#include "Slovo.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
class ZoznamSlov
{
	vector <Slovo*> zoznamSlov;
public:
	ZoznamSlov();
	~ZoznamSlov();
	void nacitajZoznam(const char* menoSuboru);
	void vypisNaKonzolu();
};

