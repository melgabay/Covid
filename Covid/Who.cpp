//#include "Who.h"
//
//Who::Who() // בונה דיפולטיבי
//{
//}
//
//Who::Who(int N_Size, string N_Act_Country, int N_Num_People, int N_Infected) // בונה לא דיפולטיבי
//{
//}
//
//Who::Who(const Who& other) // בונה מעתיק
//{
//}
//
//void Who::insertVirus(Covid19* Virus) // פונקציה המכניסה וירוס כלשהו למערך
//{
//}
//
//void Who::ChangeGenes(int index, string N_Gene) // פונקציה המשנה את הקוד הגנטי של הוירוס הקזחי בלבד , השינוי יהיה לפי אינדקס
//{
//}
//
//void Who::setVirus(int index, Covid19* Virus) // השמה של וירוס עם נתונים חדשים לאינדקס ספציפי
//{
//}
//
//int Who::FirstEmpty(const Who& other) // פונקציית עזר המחזירה את האינדקס הראשון שפנוי במערך, במידה ואין יוחזר -1
//{
//    if (other.arr == "")
//    {
//        return -1;
//    }
//    else
//    {
//        for (int i = 0; i < other.Size; i++)
//        {
//            if (other.arr[i] == "")
//            {
//                return i;
//            }
//        }
//    }
//    return -1;
//}
//
//const Who& Who ::operator=(const Who& other) // אופרטור השמה עבור מחלה
//{
//    return *this;
//}
//
//ostream& operator<<(ostream& out, const Who& other) // אופרטור הדפסה
//{
//    return out;
//}