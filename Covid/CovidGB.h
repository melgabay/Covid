#pragma once
#include "Covid19.h"

class CovidGB : virtual public Covid19
{
protected:
    int LungsFunc;
    string Country;

public:
    CovidGB() : Covid19() { LungsFunc = -1, Country = ""; }                                                 // בונה דיפולטיבי
    CovidGB(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID, int N_LungsFunc, string N_Country); // בונה לא דיפולטיבי
    CovidGB(const CovidGB& other);                                                                               // בונה מעתיק
    virtual ~CovidGB();                                                                                          // הורס דיפולטיבי

public:
    int getLungsFunc() const { return LungsFunc; }
    string getCountry() const { return Country; } // מחזרי הערכים של המחלקה - Get

public:
    void setLungsFunc(int N_LungsFunc);
    void setCountry(string N_Country); // מבצעי השמה לערכים שבמחלקה - Set

public:
    const CovidGB& operator=(const CovidGB& other);                 // אופרטור השמה עבור מחלה
    virtual void print() const;                                     // פונקציית הדפסה עבור מחלה
    friend ostream& operator<<(ostream& out, const CovidGB& other); // אופרטור הדפסה עבור מחלה
};