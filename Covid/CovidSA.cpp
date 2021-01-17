#include "CovidSA.h"

CovidSA::CovidSA(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID, int N_LiverFunc, string N_Country) : Covid19(N_Spreading, N_Molecules, N_Vaccine, N_ID) // בונה לא דיפולטיבי
{
	if (N_LiverFunc < 0 || N_LiverFunc > 10 || N_Country.empty())
	{
		LiverFunc = -1;
		Country = "";
		throw "Incorrect input";
	}
	else
	{
		LiverFunc = N_LiverFunc;
		Country = N_Country;
	}
}

CovidSA::CovidSA(const CovidSA& other) : Covid19(other.Spreading, other.Molecules, other.Vaccine, other.ID) // בונה מעתיק
{
	this->LiverFunc = other.LiverFunc;
	this->Country = other.Country;
}

CovidSA::~CovidSA()
{
}

void CovidSA::setLiverFunc(int N_LiverFunc)
{
	if (N_LiverFunc < 0 || N_LiverFunc > 10)
	{
		throw "Incorrect input";
		return;
	}

	LiverFunc = N_LiverFunc;
	return;
}

void CovidSA::setCountry(string N_Country)
{
	if (N_Country.empty())
	{
		throw "Incorrect input";
		return;
	}

	Country = N_Country;
	return;
}

const CovidSA& CovidSA ::operator=(const CovidSA& other) // אופרטור השמה למחלה
{
	if (this == &other)
	{
		throw "Same object";
		return *this;
	}

	Covid19 ::operator=(other);
	LiverFunc = other.LiverFunc;
	Country = other.Country;
	return *this;
}

void CovidSA::print() const // פונקציית הדפסה
{
	//((Covid19&)*this).print();
	cout << ((Covid19&)*this);
	cout << "Liver function rate is : " << LiverFunc << endl;
	cout << "The first country that confront the disease : " << Country << endl;
}

ostream& operator<<(ostream& out, const CovidSA& other) // אופרטור הדפסה
{
	out << (Covid19&)other;
	out << "Liver function rate is : " << other.LiverFunc << endl;
	out << "The first country to confront the disease : " << other.Country << endl;
	return out;
}
