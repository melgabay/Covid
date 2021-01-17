#include "CovidKZ.h"

CovidKZ::CovidKZ(const CovidKZ& other) : Covid19(other), CovidSA(other), CovidGB(other)
{
    S_ID = other.S_ID;
}

CovidKZ::~CovidKZ()
{
}

void CovidKZ::setS_ID(string N_ID)
{
    if (N_ID.size() <= 20)
    {
        for (int i = 0; i < N_ID.size(); i++)
        {
            if (N_ID[i] != 'A' && N_ID[i] != 'G' && N_ID[i] != 'T' && N_ID[i] != 'C')
            {
                throw "Incorecct input";
                return;
            }
        }
        S_ID = N_ID;
        return;

    }
        throw "Incorecct input";
        return;
}

const CovidKZ& CovidKZ ::operator=(const CovidKZ& other) // אופרטור השמה עבור מחלה
{
    if (this == &other)
    {
        throw "Same object";
        return *this;
    }

    Covid19 ::operator=(other);
    CovidGB ::operator=(other);
    CovidSA ::operator=(other);
    S_ID = other.S_ID;
    return *this;
}

void CovidKZ::print() const // פונקציית הדפסה
{
   // ((Covid19&)*this).print();
    cout << ((Covid19&)*this);
    cout << "Lung function rate is : " << LungsFunc << endl;
    cout << "The first country that confront the disease : " << CovidGB::Country << endl;
    cout << "Liver function rate is : " << LiverFunc << endl;
    cout << "The first country that confront the disease : " << CovidSA::Country << endl;
    return;
}

ostream& operator<<(ostream& out, const CovidKZ& other) // אופרטור הדפסה
{
    out << (Covid19&)other;
    out << "Lung function rate is : " << other.LungsFunc << endl;
    out << "The first country to confront the disease : " << static_cast<CovidGB>(other).getCountry() << endl;
    out << "Liver function rate is : " << other.LiverFunc << endl;
    out << "The first country to confront the disease : " << static_cast<CovidSA>(other).getCountry() << endl;
    return out;
}