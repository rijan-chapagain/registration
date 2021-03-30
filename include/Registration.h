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
	unsigned GetCredits() const;

    /**
     * @brief Get the Count object
     *
     * @return const unsigned
     */
	unsigned GetCount() const;

    /**
     * @brief Set the Count object
     *
     */
    void SetCount(unsigned);

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
    void SetSemesters(unsigned);

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

#endif  //_REGISTRATION_H
