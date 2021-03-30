//
//
//  @ Project : Registration
//  @ File Name : Result.h
//  @ Date : 18/03/2021
//  @ Author : RC
//
//

#if !defined(_RESULT_H)
#define _RESULT_H

// Includes
#include <iostream>
#include "Unit.h"
#include "Date.h"

const unsigned MaxUnitResults = 10;

/**
 * @class Result
 * @brief Manages all the results
 * 		  Manages Units and Dates objects
 *
 * @bug This program does not have any known bugs
 * @todo Change String array to Vector
 * @todo Remove & from setters
 * @todo Make Getter Const
 */
class Result {

public:
	/**
	 * @brief Construct a new Result object
	 *
	 */
	Result();

	/**
	 * @brief Get the Marks object
	 *
	 * @return unsigned
	 */
	unsigned GetMarks() const;

	/**
	 * @brief Set the Marks object
	 *
	 * @param mrks
	 */
	void SetMarks(unsigned mrks);

	/**
	 * @brief Get the Credits object
	 *
	 * @return const unsigned
	 */
	unsigned GetCredits(int) const;

	/**
	 * @brief Set the Credits object
	 *
	 * @param credits
	 */
    void SetCredits(unsigned credits);

	/**
	 * @brief Get the Results Info object
	 *
	 */
	void GetResultsInfo(int&, std::string&, std::string&, unsigned&, unsigned&, unsigned&, std::string&, unsigned&);

	/**
	 * @brief Set the Results Info object
	 *
	 * @param fileOutput
	 */
    void SetResultsInfo(std::ofstream &fileOutput, int);

private:

	Units units[MaxUnitResults];
	Date dates[MaxUnitResults];
	unsigned marks;
	unsigned count;

};

#endif  //_RESULT_H
