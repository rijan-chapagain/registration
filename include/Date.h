//
//
//  @ Project : Registration
//  @ File Name : Date.h
//  @ Date : 22/03/2021
//  @ Author : RC
//
//

#ifndef DATE_H
#define _DATE_H

// Includes

#include <iostream>
#include <string.h>
#include "Unit.h"

/**
 * @class Date
 * @brief Date class
 *
 * @bug This program does not have any known bugs
 * @todo Remove & from setters
 * @todo Make Getter Const
 */
class Date
{
public:
    /**
     * @brief Construct a new Date object
     *
     */
    Date();

    /**
     * @brief Get the Day No object
     *
     * @return unsigned
     */
    unsigned GetDayNo();

    /**
     * @brief Get the Month object
     *
     * @return std::string
     */
    std::string GetMonth();

    /**
     * @brief Get the Year No object
     *
     * @return unsigned
     */
    unsigned GetYearNo();

    /**
     * @brief Set the Day No object
     *
     */
    void SetDayNo(unsigned& );

    /**
     * @brief Set the Month object
     *
     */
    void SetMonth(std::string& );

    /**
     * @brief Set the Year No object
     *
     */
    void SetYearNo(unsigned& );

private:

    unsigned day;
    std::string month;
    unsigned year;
};

/**
 * @brief Get the DayNo object that belongs to Date
 *
 * @return unsigned day
 */
inline unsigned Date::GetDayNo()
{
    return day;
}

/**
 * @brief Set the DayNo object
 *
 * @param d
 */
inline void Date::SetDayNo(unsigned& d)
{
    day = d;
}

/**
 * @brief Get the Month object
 *
 * @return std::string
 */
inline std::string Date::GetMonth()
{
    return month;
}

/**
 * @brief Set the Month object
 *
 * @param m
 */
inline void Date::SetMonth(std::string& m)
{
    month = m;
}

/**
 * @brief Get the Year No object
 *
 * @return unsigned
 */
inline unsigned Date::GetYearNo()
{
    return year;
}

/**
 * @brief Set the Year No object
 *
 * @param y
 */
inline void Date::SetYearNo(unsigned& y)
{
    year = y;
}

#endif // DATE_H
