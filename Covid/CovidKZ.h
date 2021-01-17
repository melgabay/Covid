#pragma once
#include "CovidGB.h"
#include "CovidSA.h"

class CovidKZ : public CovidSA, public CovidGB
{

protected:
    string S_ID; // רצף גנטי של המחלה

public:
    CovidKZ() { S_ID = ""; }                                                                                                               // בונה דיפולטיבי
    CovidKZ(const CovidSA& N_CovidSA, const CovidGB& N_CovidGB, const string N_ID) : Covid19(N_CovidSA), CovidSA(N_CovidSA), CovidGB(N_CovidGB) // בונה לא דיפולטיבי
    {
        S_ID = N_ID;
    }
    CovidKZ(const CovidKZ& other); // בונה מעתיק
    ~CovidKZ();

public:
    string getS_ID() const { return S_ID; } // מחזרי הערכים של המחלקה - Get

public:
    void setS_ID(string N_ID);

public:
    const CovidKZ& operator=(const CovidKZ& other);                 // אופרטור השמה עבור מחלה
    virtual void print() const;                                     // פונקציית הדפסה עבור מחלה
    friend ostream& operator<<(ostream& out, const CovidKZ& other); // אופרטור הדפסה עבור מחלה
};
