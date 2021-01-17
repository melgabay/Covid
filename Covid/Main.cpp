#include "Covid19.h"
#include "CovidGB.h"
#include "CovidSA.h"

int main()
{
	Covid19 melgabay(2.1, 5, true, "AZERTYUIOPQSDFGHJKLM");
	CovidGB grand(2.1, 2, true, "azertyuiopqsdfghjklm", 3, "france");
	CovidSA nouveau(1.1, 3, false, "zertyuiopaqsdfghjklm", 3, "belgique");
	nouveau.print();
	cout << nouveau << endl;
}