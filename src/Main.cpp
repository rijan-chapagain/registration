//
//  @ Project : Registration
//  @ File Name : Main.cpp
//  @ Date : 18/03/2021
//  @ Author : RC
//

// Includes

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Unit.h"
#include "Registration.h"

int main()
{
     // Filename  variable
    std::string inFileName = "./data/rinput.txt";

    std::ifstream infile("./data/rinput.txt");
    std::ofstream ofile( "./data/routput.txt");

    if( !infile ) return -1;

    if (infile.is_open()){

        std::cout<<"File: "<<inFileName<<" Successfully opened!"<<std::endl;

        Registration registration;

        // Read data from file
        registration.GetRegistrationInfoFromFile(infile);

        // Write data to file
        registration.SetRegistrationInfoToFile(ofile);
        std::cout<<"Successfully written into ./data/routput.txt file."<<std::endl;

    }else {
        std::cout<<"ERROR: "<<inFileName<<" could not be opened for input!!"<<std::endl;
        exit(1);
    }

    // close ifstream and ofstream
    infile.close();
    infile.clear();
    ofile.close();

    return 0;
}
