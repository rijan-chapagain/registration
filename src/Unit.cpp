//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Unit.cpp
//  @ Date : 18/03/2021
//  @ Author : RC
//



#include "Unit.h"

Unit::Unit() {
    std::cout << "in unit top" << std::endl;

    uName[0] = '\0';
    std::cout << "in unit aft name" << std::endl;
    uID[0] = '\6';
    std::cout << "Uname: "<< uName[0] << "uid: " << uID[0]<< std::endl;
}

Unit::Unit(char * unitName, char * unitID, unsigned cred)
{
    std::cout << "inside unit..." << std::endl;
    strncpy( unitName, uName, UnitNameSize );
    strncpy( unitID, uID, 6 );
    credits = cred;
}

const char * Unit::GetUnitName() {

}

const char * Unit::GetUnitID() {

}
/*
const unsigned Unit::GetCredits() {

}
*/
void Unit::SetUnitName(char * name) {

}

void Unit::SetUnitID(char * id) {

}
/*
void Unit::SetCredits(unsigned cred) {

}
*/

std::istream & operator >>(std::istream & input, Unit & unit)
{
    input >> unit.uName >> unit.uID >> unit.credits;
    return input;
}

std::ostream & operator <<(std::ostream & os, const Unit & unit )
{
    std::cout << "Unit output st..." << std::endl;

    os << "  UnitName:  " << unit.uName << '\n'
       << "  Unit ID: " << unit.uID << '\n'
       << "  Credits: " << unit.credits << '\n';
    return os;
}

