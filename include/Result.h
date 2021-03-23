//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Result.h
//  @ Date : 18/03/2021
//  @ Author : RC
//
//

#if !defined(_RESULT_H)
#define _RESULT_H

#include <iostream>
#include "Unit.h"
#include "Date.h"

const unsigned MaxUnitResults = 10;


class Result {

public:

	Result();

	/// Post Conditions: Getter and Setter for Mark into mrks
	unsigned GetMarks() const;
	void SetMarks(unsigned& mrks);

	/// Testing Purpose
    SetCredits(unsigned& credits);

	/// Post condition: getCredits will be used by registration class
	const unsigned GetCredits(int);

	void GetResultsInfo(int&, std::string&, std::string&, unsigned&, unsigned&, unsigned&, std::string&, unsigned&);
    void SetResultsInfo(std::ofstream &fileOutput, int);

private:

	Units units[MaxUnitResults];
	Date dates[MaxUnitResults];
	unsigned marks;
	unsigned count;

};


inline unsigned Result::GetMarks() const
{
    return marks;
}

inline void Result::SetMarks(unsigned& mrks)
{
    marks = mrks;
}
#endif  //_RESULT_H