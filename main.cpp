#include "ZoznamSlov.h"

int main(int argc, char * argv[])
{
	ZoznamSlov *z = new ZoznamSlov();
	z->nacitajZoznam("suborNaCitanie.txt");
	z->vypisNaKonzolu();
	delete z;
}