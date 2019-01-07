#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
class Slovo
{
	string slovo ;
public:
	Slovo(string pSlovo);
	~Slovo();
	string getSlovo();
	int dajPocetPismen();
};

