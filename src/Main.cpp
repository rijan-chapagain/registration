//
//
//
//  @ Project : Untitled
//  @ File Name : Main.cpp
//  @ Date : 18/03/2021
//  @ Author : RC
//
//


#include <iostream>
#include <fstream>
#include "Unit.h" // Unit class declaration
#include "Registration.h" // Registration class declaration


int main()
{
  std::ifstream infile( "rinput.txt" );
  std::cout << "Before infile" << std::endl;
  if( !infile ) return -1;
    std::cout << "After infile" << std::endl;
  Registration R;

  infile >> R;
    std::cout << " after infile in r" << std::endl;

  std::ofstream ofile( "routput.txt" );

// Use a debugger and track down the calls made "behind the scene"
  ofile << R
    << "Number of courses = " << R.GetCount() << '\n'
    << "Total credits     = " << R.GetCredits() << '\n';


  // Declare and initialize a Course, and modify
  // its credits.
/*
  For Lab 3, you can comment out this line and the next 3 lines

    std::cout << " end OS " << std::endl;

  Unit aUnit( "Data_Structure", "ICT283", 3 );
  aUnit.SetCredits( 5 );
  std::cout << aUnit << std::endl; // the operator << for unit is called
*/
  return 0;
}
