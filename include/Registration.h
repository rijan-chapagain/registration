//
//
//  @ Project : Registration
//  @ File Name : Registration.h
//  @ Date : 18/03/2021
//  @ Author : RC
//
//


#if !defined(_REGISTRATION_H)
#define _REGISTRATION_H

// Includes

#include <iostream>
#include "Unit.h"
#include "Result.h"

const unsigned maxNo = 10;

/**
 * @class Registration
 * @brief Manage the whole registration process
 *
 * @bug This program does not have any known bugs
 * @todo Change String array to Vector
 * @todo Remove & from setters
 * @todo Make Getter Const
 */
class Registration {

public:
    /**
     * @brief Construct a new Registration object
     *
     */
	Registration();

    /**
     * @brief Get the Credits object
     *
     * @return const unsigned
     */
	const unsigned GetCredits();

    /**
     * @brief Get the Count object
     *
     * @return const unsigned
     */
	const unsigned GetCount();

    /**
     * @brief Set the Count object
     *
     */
    void SetCount(unsigned&);

    /**
     * @brief Get the Student Id object
     *
     * @return unsigned long
     */
    unsigned long GetStudentId() const;

    /**
     * @brief Set the Student Id object
     *
     * @param long
     */
    void SetStudentId(unsigned long&);

    /**
     * @brief Get the Semesters object
     *
     * @return unsigned
     */
    unsigned GetSemesters() const;

    /**
     * @brief Set the Semesters object
     *
     */
    void SetSemesters(unsigned&);

    /**
     * @brief Get the Registration Info From File object
     *
     * @param fileInputToRead
     */
    void GetRegistrationInfoFromFile(std::ifstream &fileInputToRead);

    /**
     * @brief Set the Registration Info To File object
     *
     * @param fileOutput
     */
    void SetRegistrationInfoToFile(std::ofstream &fileOutput);

private:

	unsigned long studentId;
	unsigned semester;
	unsigned count;
	Result results[maxNo];
};

/**
 * @brief Get the Count object
 *
 * @return const unsigned
 */
inline const unsigned Registration::GetCount()
{
    return count;
}

/**
 * @brief Set the count object
 *
 * @param ct
 */
inline void Registration::SetCount(unsigned& ct)
{
    count = ct;
}

/**
 * @brief Get the student id object
 *
 * @return unsigned long
 */
inline unsigned long Registration::GetStudentId() const
{
    return studentId;
}

/**
 * @brief Set the student Id object
 *
 * @param id
 */
inline void Registration::SetStudentId(unsigned long& id)
{
    studentId = id;
}

/**
 * @brief Get the semester object
 *
 * @return unsigned int semester
 */
inline unsigned int Registration::GetSemesters() const
{
    return semester;
}

/**
 * @brief set the semesters object
 *
 * @param sems
 */
inline void Registration::SetSemesters(unsigned& sems)
{
    semester = sems;
}

#endif  //_REGISTRATION_H
