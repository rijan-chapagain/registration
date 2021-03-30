//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Registration
//  @ File Name : Registration.cpp
//  @ Date : 18/03/2021
//  @ Author : RC
//
//

// Includes

#include "Registration.h"
#include <iostream>
#include <fstream>

// Construct a new Registration:: Registration object
Registration::Registration()
{
    count = 0;
}

unsigned Registration::GetCredits() const
{
    unsigned sum = 0;
    int count = GetCount();
    for(unsigned i = 0; i < count; i++)
        sum += results[i].GetCredits(i);

    return sum;
}


/**
 * @brief Get the Count object
 *
 * @return const unsigned
 */
 unsigned Registration::GetCount() const
{
    return count;
}

/**
 * @brief Set the count object
 *
 * @param ct
 */
 void Registration::SetCount(unsigned ct)
{
    count = ct;
}

/**
 * @brief Get the student id object
 *
 * @return unsigned long
 */
 unsigned long Registration::GetStudentId() const
{
    return studentId;
}

/**
 * @brief Set the student Id object
 *
 * @param id
 */
 void Registration::SetStudentId(unsigned long& id)
{
    studentId = id;
}

/**
 * @brief Get the semester object
 *
 * @return unsigned int semester
 */
 unsigned int Registration::GetSemesters() const
{
    return semester;
}

/**
 * @brief set the semesters object
 *
 * @param sems
 */
 void Registration::SetSemesters(unsigned sems)
{
    semester = sems;
}

void Registration::GetRegistrationInfoFromFile(std::ifstream &fileInputToRead)
{
    std::string name;
    std::string month;
    unsigned long sId;
    unsigned noOfSemester;
    unsigned noOfCount;
    std::string idUnit;
    unsigned credits;
    unsigned marks;
    unsigned day;
    unsigned year;

    while(fileInputToRead >> sId >> noOfSemester >> noOfCount)
    {
        SetStudentId(sId);
        SetSemesters(noOfSemester);
        SetCount(noOfCount);

        for(int resultIndex =0; resultIndex < GetCount(); resultIndex++)
        {
            fileInputToRead >> name >> idUnit >> credits >> marks >> day >> month >> year;
            results[resultIndex].GetResultsInfo(
                    resultIndex, name, idUnit, credits, marks, day, month, year);
        }

    }

}

void Registration::SetRegistrationInfoToFile(std::ofstream &fileOutput)
{
    fileOutput << "Student ID: " << GetStudentId() << '\n' << "Semesters: " << GetSemesters() << std::endl;


    for( int resultsIndex =0; resultsIndex < GetCount(); resultsIndex++)
    {
        results[resultsIndex].SetResultsInfo(fileOutput, resultsIndex);
    }

    fileOutput << "Number Of Units: " << GetCount() << std::endl;
    fileOutput << "Total Credits: " << GetCredits() << std::endl;

}
