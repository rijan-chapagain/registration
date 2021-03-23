//
//

#ifndef DATE_H
#define DATE_H


#include <iostream>
#include <string.h>
#include "Unit.h"


class Date {

public:

    /// Constructor
    /// PostCondition: day, month, year == d,m,y
    Date();

    /// Getter methods
    unsigned GetDayNo();
    std::string GetMonth();
    unsigned GetYearNo();

    /// Setter methods
    void SetDayNo(unsigned& );
    void SetMonth(std::string& );
    void SetYearNo(unsigned& );

//    string subYo(string inputStr, const string& thisStr, const string& toBeReplaced);

private:

    unsigned day;
    std::string month;
    unsigned year;
};


inline unsigned Date::GetDayNo()
{
    return day;
}

inline void Date::SetDayNo(unsigned& d)
{
    day = d;
}

inline std::string Date::GetMonth()
{
    return month;
}

inline void Date::SetMonth(std::string& m)
{
    month = m;
}

inline unsigned Date::GetYearNo()
{
    return year;
}

inline void Date::SetYearNo(unsigned& y)
{
    year = y;
}



#endif // DATE_H
