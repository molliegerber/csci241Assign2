 #include "Provider.h"


/***************************************************************
 
 Constructor
 
 Use: sets all data members to null string
 
 Parameters: none
 
 Returns: nothing
 
 ***************************************************************/

Provider::Provider()
{
}

/***************************************************************
 
 print
 
 Use: prints and organizes arrays
 
 Parameters: none
 
 Returns: nothing
 
 ***************************************************************/

void Provider::print() const
{
    
    cout << "#" << Number << endl;
    
    cout << Name << endl;
    
    cout << Specialty << endl;
    
    cout << Address1 << endl;
    
    cout << Address2 << endl;
    
    cout << City << ", ";
    
    cout << State << " ";
    
    cout << Zip << endl;
    
    cout  << Phone << endl << endl;
    
}

