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
    unsigned GetDayNo() const;

    /**
     * @brief Get the Month object
     *
     * @return std::string
     */
    std::string GetMonth() const;

    /**
     * @brief Get the Year No object
     *
     * @return unsigned
     */
    unsigned GetYearNo() const;

    /**
     * @brief Set the Day No object
     *
     */
    void SetDayNo(unsigned);

    /**
     * @brief Set the Month object
     *
     */
    void SetMonth(std::string);

    /**
     * @brief Set the Year No object
     *
     */
    void SetYearNo(unsigned);

private:

    unsigned day;
    std::string month;
    unsigned year;
};

#endif // DATE_H
