//
// Date.cpp
//

// Includes
#include "Date.h"
#include <string>
#include <iostream>


// Construct a new Date:: Date object

Date::Date() = default;


/**
 * @brief Get the DayNo object that belongs to Date
 *
 * @return unsigned day
 */
 unsigned Date::GetDayNo() const
{
    return day;
}

/**
 * @brief Set the DayNo object
 *
 * @param d
 */
 void Date::SetDayNo(unsigned d)
{
    day = d;
}

/**
 * @brief Get the Month object
 *
 * @return std::string
 */
 std::string Date::GetMonth() const
{
    return month;
}

/**
 * @brief Set the Month object
 *
 * @param m
 */
 void Date::SetMonth(std::string m)
{
    month = m;
}

/**
 * @brief Get the Year No object
 *
 * @return unsigned
 */
 unsigned Date::GetYearNo() const
{
    return year;
}

/**
 * @brief Set the Year No object
 *
 * @param y
 */
 void Date::SetYearNo(unsigned y)
{
    year = y;
}
