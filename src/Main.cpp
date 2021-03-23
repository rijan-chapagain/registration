//
//  @ Project : Untitled
//  @ File Name : Main.cpp
//  @ Date : 18/03/2021
//  @ Author : RC
//
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Unit.h"
#include "Registration.h"

int main()
{
     // Filename  variable
    std::string inFileName = "./data/rinput.txt";

    // input file stream
    std::ifstream infile(inFileName.c_str(), std::ios::in);
    std::ofstream ofile( "./data/routput.txt", std::ios::out);

    if( !infile ) return -1;

    if (infile.is_open()){

        std::cout<<"file: "<<inFileName<<" opened OK!"<<std::endl;

        // If can open file
        // initilize Registration Object
        Registration registration;

        // Read info from file
        registration.GetRegistrationInfoFromFile(infile);

        // Write info to file
        registration.SetRegistrationInfoToFile(ofile);

    }else {
        std::cout<<"ERROR: "<<inFileName<<" could not be opened for input!!"<<std::endl;
        exit(1);
    }

    // close ifstream and ofstream
    infile.close();
    infile.clear();
    ofile.close();
    ofile.close();

    return 0;
}
