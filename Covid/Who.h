//#pragma once
//#include "CovidKZ.h"
//
//class Who
//{
//
//private:
//    int FirstEmpty(const Who& other); // פונקציית עזר המחזירה את האינדקס הראשון שפנוי במערך, במידה ואין יוחזר -1
//
//private:
//    Covid19** arr;      // מערך מצביעים לסוגי הוירוס השונים
//    int Size;          // גודל המערך הנתון
//    string Act_Country; // המדינה בה אנו פועלים
//    int Num_People;     // מספר האנשים הכללי של האוכלוסיה
//    int Infected;       // מספר האנשים החולים
//    int Dif_virus;      // מספר הוירוסים בעלי רצף גנטי שונה באותה מדינה
//
//public:
//    Who();                                                                   // בונה דיפולטיבי
//    Who(int N_Size, string N_Act_Country, int N_Num_People, int N_Infected); // בונה לא דיפולטיבי
//    Who(const Who& other);                                                   // בונה מעתיק
//    ~Who();                                                                  // הורס דיפולטיבי
//
//public:
//    void insertVirus(Covid19* Virus);           // פונקציה המכניסה וירוס כלשהו למערך
//    void ChangeGenes(int index, string N_Gene); // פונקציה המשנה את הקוד הגנטי של הוירוס הקזחי בלבד , השינוי יהיה לפי אינדקס
//    const Who& operator=(const Who& other);     // אופרטור השמה עבור המחלקה
//
//public:
//    void setVirus(int index, Covid19* Virus);                   // השמה של וירוס עם נתונים חדשים לאינדקס ספציפי
//    friend ostream& operator<<(ostream& out, const Who& other); // אופרטור הדפסה עבור מחלה
//};
