#pragma once
#include "Covid19.h"
//hello

class CovidSA : virtual public Covid19
{
protected:
    int LiverFunc;
    string Country;

public:
    CovidSA() : Covid19() { LiverFunc = -1, Country = ""; }                                                 // בונה דיפולטיבי
    CovidSA(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID, int N_LiverFunc, string N_Country); // בונה לא דיפולטיבי
    CovidSA(const CovidSA& other);                                                                               // בונה מעתיק
    virtual ~CovidSA();                                                                                          // הורס דיפולטיבי

public:
    int getLungsFunc() const { return LiverFunc; }
    string getCountry() const { return Country; } // מחזרי הערכים של המחלקה - Get

public:
    void setLiverFunc(int N_LiverFunc);
    void setCountry(string N_Country); // מבצעי השמה לערכים שבמחלקה - Set

public:
    const CovidSA& operator=(const CovidSA& other);                 // אופרטור השמה עבור מחלה
    virtual void print() const;                                     // פונקציית הדפסה עבור מחלה
    friend ostream& operator<<(ostream& out, const CovidSA& other); // אופרטור הדפסה עבור מחלה
};
