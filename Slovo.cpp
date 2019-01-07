#include "Slovo.h"






Slovo::Slovo(string pSlovo)
{
	slovo = pSlovo;
}

Slovo::~Slovo()
{
}

string Slovo::getSlovo()
{
	return slovo;
}

int Slovo::dajPocetPismen()
{
	return slovo.length();
}
