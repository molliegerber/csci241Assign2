// Provider Class
#ifndef PROVIDER_H
#define PROVIDER_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

using std::cout; using std::cin; using std::cerr; using std::endl;
using std::string; using std::ifstream;


//*****************************************************************
// FILE:      Provider.h
// AUTHOR:    Mollie Gerber
// LOGON ID:  z1816352
// DUE DATE:  due date of assignment
//
// PURPOSE:   Declaration for the Provider class, which represents
//            information about a health care provider.
//*****************************************************************

class Provider
{
    // Data members and method prototypes for the Provider class go here
    
public:
    
    
    //constuctor class
    
    Provider();
    
    void print() const;
    
    const char* getProviderNumber() {return Number;}
    
    const char* getSpecialty() {return Specialty;}
    
    const char* getName() {return Name;}
    
    // creating arrays for info to be put into
    
private:
    
    char Number[7]={};
    
    char Specialty[41]={};
    
    char Name[41]={};
    
    char Address1[41]={};
    
    char Address2[31]={};
    
    char City[21]={};
    
    char State[3]={};
    
    char Zip[6]={};
    
    char Phone[15]={};
    
};

#endif
