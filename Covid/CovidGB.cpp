#include "CovidGB.h"

CovidGB::CovidGB(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID, int N_LungsFunc, string N_Country) : Covid19(N_Spreading, N_Molecules, N_Vaccine, N_ID) // בונה לא דיפולטיבי
{
	if (N_LungsFunc < 0 || N_LungsFunc > 10 || N_Country.empty())
	{
		LungsFunc = -1;
		Country = "";
		throw "Incorrect input";
	}
	else
	{
		LungsFunc = N_LungsFunc;
		Country = N_Country;
	}
}

CovidGB::CovidGB(const CovidGB& other) : Covid19(other.Spreading, other.Molecules, other.Vaccine, other.ID) // בונה מעתיק
{
	this->LungsFunc = other.LungsFunc; // why you dont do LungsFunc = other.LungsFunc
	this->Country = other.Country;
}

CovidGB::~CovidGB()
{
}

void CovidGB::setLungsFunc(int N_LungsFunc)
{
	if (N_LungsFunc < 0 || N_LungsFunc > 10)
	{
		throw "Incorrect input";
		return;
	}
	LungsFunc = N_LungsFunc;
	return;
}

void CovidGB::setCountry(string N_Country)
{
	if (N_Country.empty())
	{
		throw "Incorrect input";
		return;
	}

	Country = N_Country;
	return;
}

const CovidGB& CovidGB ::operator=(const CovidGB& other) // אופרטור השמה למחלה
{
	if (this == &other)
	{
		throw "Same object";
		return *this;
	}

	Covid19 :: operator= (other);
	LungsFunc = other.LungsFunc;
	Country = other.Country;
	return *this;
}

void CovidGB::print() const // פונקציית הדפסה
{
	//((Covid19&)*this).print();  לא עבד
	cout << ((Covid19&)*this);
	cout << "Lung function rate is : " << LungsFunc << endl;
	cout << "The first country that confront the disease : " << Country << endl;
	return;

}

ostream& operator<<(ostream& out, const CovidGB& other) // אופרטור הדפסה
{
	out << (Covid19&)other;
	out << "Lung function rate is : " << other.LungsFunc << endl;
	out << "The first country to confront the disease : " << other.Country << endl;
	return out;
}
