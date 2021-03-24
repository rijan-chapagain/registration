//
//
//  @ Project : Registration
//  @ File Name : Unit.h
//  @ Date : 18/03/2021
//  @ Author : RC
//
//

#if !defined(_UNIT_H)
#define _UNIT_H

// Includes

#include <iostream>
#include <string.h>

/**
 * @class Units
 * @brief Manages all units
 *
 * @bug This program does not have any known bugs
 * @todo Remove & from setters
 * @todo Make Getter Const
 */
class Units {

public:
    /**
     * @brief Construct a new Units object
     *
     */
    Units();

    /**
     * @brief Set the Credits object
     *
     */
    void SetCredits(unsigned&);

    /**
     * @brief Get the Credits object
     *
     * @return unsigned int
     */
    unsigned int GetCredits() const;

    /**
     * @brief Set the Unit id object
     *
     * @param std::string
     * @return void
     */
    void SetID_Unit(std::string);

    /**
     * @brief retrives unit id
     *
     * @return std::string
     */
    std::string GetIDUnit() const;

    /**
     * @brief Set the Name object
     *
     * @param inputName
     */
    void SetName(std::string inputName);

    /**
     * @brief Get the Name object
     *
     * @return std::string
     */
    std::string GetName() const;

    /**
     * @brief clean the strings
     *
     */
    void CleanTheString(std::string& , const std::string& , const std::string& );

    /**
     * @brief Construct a new Re Arrange String With Unit ID object
     *
     * @param std::string&, std::string&
     *
     */
    ReArrangeStringWithUnitID(std::string&, std::string&);

    /**
     * @brief define isCapital variable
     *
     * @param x
     * @return int
     */
    int isCapital(char x);

private:

    std::string name;             // unit name, C style string. not a C++ string object
    std::string  ID_Unit;       // unit id type integer
    unsigned int  credits;       // number of credits
};

/**
 * @brief Set the Credits object that belongs to Units
 *
 * @param creditsInput
 * @return void
 */
inline void Units::SetCredits(unsigned &creditsInput)
{
    credits = creditsInput;
}

/**
 * @brief Get the Credits object that belongs to Units
 *
 * @return unsigned credits
 */
inline unsigned Units::GetCredits() const
{
    return credits;
}

/**
 * @brief Set the Unit id object that belongs to Units
 *
 * @param idUnit
 * @return void
 */
inline void Units::SetID_Unit(std::string idUnit)
{
    ID_Unit = idUnit;
}

/**
 * @brief Get the Unit id object that belongs to Units
 *
 * @return std::string
 */
inline std::string Units::GetIDUnit() const
{
    return ID_Unit;
}

/**
 * @brief Set the Name object that belongs to Units
 *
 * @param inputName
 * @return void
 */
inline void Units::SetName(std::string inputName)
{
    name = inputName;
}

/**
 * @brief Get the Name object that belongs to Units
 *
 * @return std::string
 */
inline std::string Units::GetName() const
{
    return name;
}

#endif  //_UNIT_H
