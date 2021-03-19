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
#include "Unit.h"
#include "Registration.h"

int main()
{
  std::ifstream infile( "rinput.txt" );
  if( !infile ) return -1;

  Registration R;

  infile >> R;

  std::ofstream ofile( "routput.txt" );

  ofile << R
    << "Number of Units = " << R.GetCount() << '\n'
    << "Total credits     = " << R.GetCredits() << '\n';

/*
  Unit aUnit( "Data", "ICT281", 3 );
  aUnit.SetCredits( 5 );
  std::cout << aUnit << std::endl; // the operator << for unit is called
*/
  return 0;
}
