#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Covid19
{
protected:
    float Spreading; // מקדם ההפצה של המחלה
    int Molecules;   // מספר המולקולות של המחלה
    bool Vaccine;    // משתנה בוליאני המייצג האם קיים חיסון או לא
    string ID;       // מחרוזת המציגה את המזהה הייחודי של המחלה

public:
    Covid19() { Spreading = 0.0, Molecules = 0, Vaccine = false, ID = ""; } // בונה דיפולטיבי
    Covid19(float N_Spreading, int N_Molecules, bool N_Vaccine, string N_ID);    // בונה לא דיפולטיבי
    Covid19(const Covid19& other);                                               // בונה העתקה
    virtual ~Covid19();                                                          // הורס דיפולטיבי

public:
    int getMolecules() const { return Molecules; }
    float getSpreading() const { return Spreading; } // מחזרי הערכים של המחלקה - Get
    bool getVaccine() const { return Vaccine; }
    string getID() const { return ID; }

public:
    const Covid19& operator=(const Covid19& other);                 // אופרטור השמה עבור מחלה
    virtual void print() const;                                     // פונקציית הדפסה עבור מחלה
    friend ostream& operator<<(ostream& out, const Covid19& other); // אופרטור הדפסה עבור המחלה

public:
    void setMolecules(const int N_Molecules);
    void setSpreading(const float N_Spreading);
    void setVaccine(const bool N_Vaccine); // מבצעי השמה לערכים שבמחלקה - Set
    void setID(const string N_ID);
};
