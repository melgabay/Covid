#include "Covid19.h"

Covid19::Covid19(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID) // בונה לא דיפולטיבי
{
    if (N_Spreading < 0 || N_Molecules < 0 || N_ID.size() != 20)
    {
        Spreading = 0;
        Molecules = 0;
        Vaccine = false;
        ID = "";
        throw "Incorrect input";
    }
    else
    {
        Spreading = N_Spreading;
        Molecules = N_Molecules;
        Vaccine = N_Vaccine;
        ID = N_ID;
    }
}

Covid19::Covid19(const Covid19& other)
{
    Spreading = other.Spreading;
    Molecules = other.Molecules;
    Vaccine = other.Vaccine;
    ID = other.ID;
}

Covid19::~Covid19()
{
}

void Covid19::setMolecules(const int N_Molecules)
{
    if (N_Molecules < 0)
    {
        throw "Incorrect input";
        return;
    }
    
        Molecules = N_Molecules;
        return;
}

void Covid19::setSpreading(const float N_Spreading)
{
    if (N_Spreading < 0)
    {
        throw "Incorrect input";
        return;
    }

	Spreading = N_Spreading;
	return;

}

void Covid19::setVaccine(const bool N_Vaccine)
{
    if (N_Vaccine != true && N_Vaccine != false)
    {
        throw "Incorrect input";
        return;
    }

	Vaccine = N_Vaccine;
	return;

}

void Covid19::setID(const string N_ID)
{
    if (N_ID.size() != 20)
    {
        throw "Incorrect input";
        return;
    }

	ID = N_ID;
	return;
}

const Covid19& Covid19 ::operator=(const Covid19& other) // אופרטור השמה למחלה
{
    if (this == &other)
    {
        throw "Same object";
        return *this;
    }

    this->Spreading = other.Spreading;
    this->Molecules = other.Molecules;
    this->Vaccine = other.Vaccine;
    this->ID = other.ID;
    return *this;
}

void Covid19::print() const
{
    cout << "Disease ID - " << ID << endl;
    cout << "Spreding rate - " << Spreading << endl;
    cout << "Number of molecules - " << Molecules << endl;
    
    if (Vaccine)
    {
        cout << "There is a vaccine to the disease" << endl;
        return;
	}

	cout << "There isnt a vaccine to the disease" << endl;
	return;
    
}

ostream& operator<<(ostream& out, const Covid19& other)
{
    out << "Disease ID - " << other.ID << endl;
    out << "Spreding rate - " << other.Spreading << endl;
    out << "Number of molecules - " << other.Molecules << endl;
    if (other.Vaccine)
    {
        out << "There is a vaccine to the disease" << endl;
        return out ;
	}

	out << "There isnt a vaccine to the disease" << endl;
    return out;
}